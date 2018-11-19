#include <iostream.h>
#include <math.h>

int main()
{
  int hex[1000];
  int i = 1, j = 0, rem, dec = 0;
  long int binaryNumber;
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber > 0)
  {
   rem = binaryNumber % 10;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0)
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value: ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9)
   {
    cout<<(char)(hex[j] + 55);
   }
   else
   {
    cout<<hex[j]<<"\n";
   }
  }
return 0;
}