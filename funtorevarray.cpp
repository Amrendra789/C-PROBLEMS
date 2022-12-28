#include<iostream>
using namespace std;
void rev(int arr[],int n)
{
    int s=0,temp;
    int e=n-1;
    while(s<e)
    {
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
int main()
{
    int arr[5],n=5,i;
    cout<<"enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
