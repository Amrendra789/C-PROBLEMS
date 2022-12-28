#include<iostream>
using namespace std;
void freq(int arr[],int n,int key)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    cout<<count;
}
int main()
{
    int arr[5],n=5,key,i;
    cout<<"enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    freq(arr,n,key);
    return 0;
}
