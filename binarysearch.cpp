#include<iostream>
using namespace std;
void binarysearch(int arr[],int key)
{
    int low=0;
    int k=5;
    int high=k-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==key)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=(low+high)/2;
    }
}
int main()
{
   int arr[5],n=5,i;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int key;
   cin>>key;
   binarysearch(arr,key);
   return 0;
}
