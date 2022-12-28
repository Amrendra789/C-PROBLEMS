#include<iostream>
using namespace std;
void fun(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int i,n;
    cout<<"enter the no.";
    cin>>n;
    fun(n);
    return 0;
}
