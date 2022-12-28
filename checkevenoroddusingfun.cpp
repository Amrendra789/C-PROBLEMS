#include<iostream>
using namespace std;
void fun(int n)
{
    int i;

        if(n%2==0)
        {
            cout<<"it is even no.";
        }
         else
        cout<<"it is odd no.";
}
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    fun(n);
    return 0;
}
