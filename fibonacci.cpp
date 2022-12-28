#include <iostream>

using namespace std;

int main()
{
 int i,n,a=0,b=1,sum=0,fib;
 cin>>n;
 cout<<a<<" "<<b<<" ";
 for(i=1;i<n;i++)
 {
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;

 }
    return 0;
}
