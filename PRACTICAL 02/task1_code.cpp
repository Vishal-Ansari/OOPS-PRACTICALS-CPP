#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int x,i,flag=0;
   cout<<"enter the number greater than 1 to check whether it is prime or not\n";
   cin>>x;
   for(i=2;i<=sqrt(x);i++)
   {
       if(x%i==0)
      { flag=1;
       break;
      }
   }
   if(flag==0)
   cout<<"given no is prime";
   else
   cout<<"given no is not prime";
   
}
