#include<iostream>
using namespace std;
int main()
{
    int unit;
    float bill;
    cout<<"Enter the unit"<<endl;
    cin>>unit;
    if(unit<=100)
    {
        bill=unit*0.5;
    }
    else if(unit<=200)
    {
        bill=50+(unit-200)*0.65;
    }
    else if(unit<=300)
    {
        bill=50+65+(unit-300)*0.8;
    }
    else
    {
        bill=50+65+80+(unit-400)*0.9;
    }
    cout<<"The bill is: "<<bill<<endl;
    return 0;
}