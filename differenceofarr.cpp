#include<iostream>
using namespace std;
void difference(int A[],int B[],int C[],int m,int n)
{
    int i,j,k;
    i=j=k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else if(B[j]<A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for(;i<m;i++)
    {
        C[k++]=A[i];
    }

    for(int i=0;i<k;i++)
    {
        cout<<C[i]<<" ";
    }

}
int main()
{
    int A[5]={3,4,5,6,10},m=5;
    int B[5]={2,4,5,7,12},n=5;
    int C[10];
    difference(A,B,C,m,n);

    return 0;
}

