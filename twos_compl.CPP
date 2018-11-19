#include<iostream.h>
#include<conio.h>
#define size 8
int main()
{
char bn[size+1],ones[size+1],twoes[size+1];
int i, carry=1;
clrscr();
cout<<"Enter "<<size<<" bit binary number:";
cin>>bn;
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
