#include<iostream>
using namespace std;
void fun(int n,int fact)
{
    int i;
    for(i=1;i<=n;i++)
    {
        fact=i*fact;
    }
    cout<<fact;
}
int main()
{
    int i,n,fact=1;
    cout<<"enter the no.";
    cin>>n;
    fun(n,fact);
    return 0;
}
