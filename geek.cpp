#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
        ans=0;
        if(n%2!=0)
        {
            n=n+1;
        }
        n=n/2;
        ans=ans+n;
    }
    cout<<ans;
    return 0;
}
