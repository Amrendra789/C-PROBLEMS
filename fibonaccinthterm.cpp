#include <iostream>

using namespace std;

int main()
{
   int i,n,a=0,b=1,sum=0;
   cout<<"enter the no.";
   cin>>n;
   for(i=0;i<n;i++)
   {
       sum=a+b;
       a=b;
       b=sum;
   }
cout<<sum;
    return 0;
}
