#include<iostream>
using namespace std;
void fun(int n,int sum)
{
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}
int main()
{
    int i,n,sum=0;
    cout<<"enter the no.";
    cin>>n;
    fun(n,sum);
    return 0;
}
