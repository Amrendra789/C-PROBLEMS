#include<iostream>
using namespace std;

int main()
{
    int n=10,arr[10],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {

        sum=sum+arr[i];
    }

    cout<<sum/10;
    return 0;

}
