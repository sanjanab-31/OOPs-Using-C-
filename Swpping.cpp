// develop a c++ program that swaps teo interes vales using poiners.use type casting to access andd manipulate the values through pointers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    int *p1=&a;
    int *p2=&b;
    cout<<"Before swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    *p1 = (int)(*p1 + *p2);
    *p2 = (int)(*p1 - *p2);
    *p1 = (int)(*p1 - *p2);
    cout<<"After swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}