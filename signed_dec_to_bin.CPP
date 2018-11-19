#include<iostream.h>
#include<conio.h>
void main()
{
int dec,temp;
int i,j,n,bin[20];
clrscr();
cout<<"Enter the decimal number: ";
cin>>dec;
temp=dec;
if(dec<0)
{
dec=dec*-1;
}
for(i=0;dec>0;i++)
{
bin[i]=dec%2;
dec=dec/2;
}
bin[i]=0;
if(temp<0)
{
bin[i]=1;
}
cout<<"the signed binary value is: ";
for(j=i;j>-1;j--)
{
cout<<bin[j];
}
getch();
}