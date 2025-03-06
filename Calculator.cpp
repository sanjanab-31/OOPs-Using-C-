#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char o;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the secind number"<<endl;
    cin>>num2;
    cout<<"Enter the opertor"<<endl;
    cin>>o;
    switch(o)
    {
        case '+':
            cout<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        case '%':
            cout<<num1%num2;
            break;
        default:
            cout<<"Invalid Operator";
        
    }
}