#include<iostream>
using namespace std;
void fun(int r)
{
    float i=3.14*r*r;
    cout<<i;
}
int main()
{
    int r;
    cin>>r;
    fun(r);
    return 0;
}
