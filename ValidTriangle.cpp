#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"Valid Triangle"<<endl;
    }
    else
    {
        cout<<"Invalid Triangle"<<endl;
    }
}