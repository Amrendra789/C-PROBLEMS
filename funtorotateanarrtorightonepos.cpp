#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50},n=5,i,c=0;
    for(i=0;i<n;i++)
    {

        arr[i]=arr[n];
         c=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<c;
    }
    return 0;
}
