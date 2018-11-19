#include<iostream.h>
#include<string.h>
#include<conio.h>
#define size 8

int hexadecimalToDecimal(char hexVal[])
{
    int len = strlen(hexVal);


    int base = 1;

    int dec_val = 0;
	  for (int i=len-1; i>=0; i--)
    {            if (hexVal[i]>='0' && hexVal[i]<='9')
	{
	    dec_val += (hexVal[i] - 48)*base;
			      base = base * 16;
	}
	  else if (hexVal[i]>='A' && hexVal[i]<='F')
	{
	    dec_val += (hexVal[i] - 55)*base;

		  base = base*16;
	}
    }

    return dec_val;
}
int bin2c(char bn[])
{
char ones[size+1],twoes[size+1];
int i, carry=1;

for(i=0;i<size;i++)
{
	if(bn[i]=='1')
	{
	ones[i]='0';
	}
	else if(bn[i]=='0')
	{
	ones[i]='1';
	}
	}
	ones[size]='\0';
for(i=size-1;i>-1;i--)
	{
	if(ones[i]=='1'&&carry==1)
	{
	twoes[i]='0';
	}
	else if(ones[i]=='0'&&carry==1)
	{
	twoes[i]='1';
	carry=0;
	}
	else
	{
	twoes[i]=ones[i];
	}
	}
	twoes[size]='\0';
	cout<<"original binary = "<<bn<<endl;
	cout<<"ones complement= "<<ones<<endl;
	cout<<"twoes complement= "<<twoes<<endl;
	getch();
	return 0;
	}


void main()
{
int i,n,j,a[10];
char bin[32],hexval[32];

clrscr();
cout<<"Enter the hex: ";
cin>>hexval;
n=hexadecimalToDecimal(hexval);
for(i=0;n>0;i++)
{
	a[i]=n%2;
	n=n/2;
}
for(i=i-1,j=0;i>=0;i--,j++)
{
bin[j]=a[i]+48;
}
bin[j]='\0';
bin2c(bin);
}
