#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==1)
        cout<<1;
        else{
            fun(n/2);
        cout<<n%2;
        }
}
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    fun(n);
    return 0;
}
