#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},n=10,i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum/10;
    return 0;
}
