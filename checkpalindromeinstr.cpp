#include<iostream>
using namespace std;
int main()
{
    char A[]="madams";
    int s=0;
    int e=5;
    int flag=0;
    while(s<=e)
    {

        if(A[s]!=A[e])
        {
            flag=1;
            break;
        }
        s++;
        e--;
    }
    if(flag==0)
    {

        cout<<"pali";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}

