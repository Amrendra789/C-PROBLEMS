#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},n=10,i,se=0,so=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            se=se+arr[i];
        }
        else
            {
               so=so+arr[i];
            }
    }
    cout<<"sum of even no."<<se;
    cout<<"\n sum of odd no."<<so;
    return 0;
}
