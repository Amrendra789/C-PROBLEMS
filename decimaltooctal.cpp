#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>=1){
        fun(n/8);
        cout<<n%8;
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
