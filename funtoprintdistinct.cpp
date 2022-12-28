#include<iostream>
using namespace std;
void dis(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
               break;
            }

        }
         if(i==j)
            {
                cout<<arr[i];
            }
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
    dis(arr,n);
    return 0;
}
