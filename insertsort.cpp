#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,4,10,1,6,2},n=6;
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        temp=arr[j+1];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}