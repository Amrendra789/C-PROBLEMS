#include<iostream>
using namespace std;
int mi(int arr[],int n)
{
    int i,min=arr[0];
    int key;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
        }

    }
    for(int j=0;j<n;j++)
    {
        if(min==arr[j])
        {
            return j;
            break;
        }
    }

}
int main()
{
    int arr[5],n=5,i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<< mi(arr,n);

    return 0;

}
