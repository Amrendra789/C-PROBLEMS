#include<iostream>
using namespace std;
void subarrays(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
               cout<<arr[k]<<" ,";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int arr[6]={10,20,30,40,50,60},n=6;
    subarrays(arr,n);
    return 0;
}
