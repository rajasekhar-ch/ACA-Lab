#include<iostream.h>
#include<conio.h>
void main()
{
int x,y,sum,carry,z,tem;
clrscr();
cout<<"Full adder implementation"<<endl;
cout<<"x | y | z | carry | sum"<<endl;
cout<<"--|---|---|-------|----"<<endl;
for(x=0;x<2;x++)
{
	for(y=0;y<2;y++)
	{
		for(z=0;z<2;z++)
		{
		tem = x^y;
		sum=tem^z;
		carry= (z&tem)|(x&y);
		cout<<x<<" | "<<y<<" | "<<z<<" |   "<<carry<<"   |  "<<sum<<endl;
}
}
}
getch();
}