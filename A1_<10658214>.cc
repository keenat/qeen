#include <iostream>

using namespace std;

int main()
{
     int num,read=0;

cout<<"Enter the number ";
cin>>num;

for(int i=1;i<=num;i++)
 {
if (num%i==0)
   { 	read++;
   }
 }
if(read==2)
   {
	cout<<num<<" is a prime number";
   }
else
   {
	cout<<num<<" is not a prime number";
   }
    return 0;
}
