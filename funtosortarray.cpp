#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[5],n,i;
    cin>>n;
    cout<<"enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
