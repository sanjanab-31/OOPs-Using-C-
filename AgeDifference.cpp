#include<iostream>
using namespace std;
int main()
{
    int d1,y1,m1,d2,m2,y2;
    cout<<"Enter teh first date as dd mm yyyy"<<endl;
    cin>>d1>>m1>>y1;
    cout<<"Enter teh second date as dd mm yyyy"<<endl;
    cin>>d2>>m2>>y2;
    if(y1>y2)
    {
        cout<<"The age diferenece is: "<<y1-y2<<endl;
    }
    else if(y1==y2)
    {
        if(m1==m2 && d1>d2)
        {
            cout<<"The age difference is:"<<d1-d2<<endl;
        }
        else if(m1==m2 && d1<d2)
        {
            cout<<"The age difference is:"<<d2-d1<<endl;
        }
        else if(m1==m2 && d1==d2)
        {
            cout<<"The age difference is:0"<<endl;
        }
        else if(m1>m2)
        {
            cout<<"The age difference is:"<<m1-m2<<endl;
        }
        else
        {
            cout<<"The age difference is:"<<m2-m1<<endl;
        }
    }
    else
    {
        cout<<"The age difference is:"<<y2-y1<<endl;
    }
}