#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],brr[3][3],crr[3][3],n=3;
    int i,j;
    cout<<"enter no of elements for first matrix";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the no. of elements for second matrix";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>brr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j];
             cout<<crr[i][j]<<" ";
        }
         cout<<endl;
    }
    return 0;
}
