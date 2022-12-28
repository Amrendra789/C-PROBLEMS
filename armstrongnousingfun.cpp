#include<iostream>
#include<cmath>
using namespace std;
int fun(int n)
{
    int x;
    int sum=0;
    while(n>0)
    {
        x=n%10;
        sum ==sum+pow(x,3);
        n=n/10;
    }
   return sum;
}
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    if(fun(n)==n)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}
