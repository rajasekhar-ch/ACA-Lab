#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,a[10];
clrscr();
cout<<"Enter the number: ";
cin>>n;
for(i=0;n>0;i++)
{
	a[i]=n%2;
	n=n/2;
}
for(i=i-1;i>=0;i--)
{
cout<<a[i];
}
getch();
}