#include<iostream.h>
#include<conio.h>
int main()
{
int x,y,sum,carry;
clrscr();
cout<<"Half adder Implementation"<<endl;
cout<<"x | y | carry | sum"<<endl;
cout<<"--|---|-------|----"<<endl;
for(x=0;x<2;x++)
{
for(y=0;y<2;y++)
{
sum = x^y;
carry = x&y;
cout<<x<<" | "<<y<<" |   "<<carry<<"   |   " <<sum<<endl;
}
}
getch();
return 0;
}