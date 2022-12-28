#include<iostream>
using namespace std;
void deletes(int arr[],int pos,int  n)
{
    int i;

    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}
int main()
{
    int arr[10]={2,3,4,5,6,8,9};
    int pos,n=10;
    cin>>pos;
    deletes(arr,pos,7);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
