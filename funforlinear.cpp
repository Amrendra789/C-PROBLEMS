#include<iostream>
using namespace std;
int linear(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[6]={1,2,3,4,9,10},n=6;
    int key;
    cin>>key;
    int index=linear(arr,n,key);
    if(index!=-1)
        cout<<"element found";
    else
        cout<<"not found";
    return 0;
}
