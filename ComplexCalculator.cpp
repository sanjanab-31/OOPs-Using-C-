#include<iostream>
using namespace std;
int main()
{
    int a1,a2,b1,b2;
    char o;
    cout<<"Enter the real part of the first number"<<endl;
    cin>>a1;
    cout<<"Enter the imaginary part of the first number"<<endl;
    cin>>b1;
    cout<<"Enter the real part of the second number"<<endl;
    cin>>a2;
    cout<<"Enter the imaginary part of the second number"<<endl;
    cin>>b2;
    cout<<"Enter the operator"<<endl;
    cin>>o;
    switch(o)
    {
        case '+':
            cout<<a1+a2<<"+"<<b1+b2<<"i"<<endl;
            break;
        case '-':
            cout<<a1-a2<<"+"<<b1-b2<<"i"<<endl;
            break;
        case '*':
            cout<<a1*a2-b1*b2<<"+"<<a1*b2+a2*b1<<"i"<<endl;
            break;
        case '/':
            cout<<(a1*a2+b1*b2)/(a2*a2+b2*b2)<<"+"<<(a2*b1-a1*b2)/(a2*a2+b2*b2)<<"i"<<endl;
            break;
        default:
            cout<<"Invalid Operator";
    }
    
}