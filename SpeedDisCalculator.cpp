#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1.Speed and distanc input"<<endl;
    cout<<"2.Speed and time input"<<endl;
    cout<<"3.Distance and time input"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            float speed,distance;
            cout<<"Enter the speed and distance"<<endl;
            cin>>speed>>distance;
            cout<<"The time taken is: "<<distance/speed<<endl;
            break;
        case 2:
            float time;
            cout<<"Enter the speed and time"<<endl;
            cin>>speed>>time;
            cout<<"The distance is: "<<speed*time<<endl;
            break;
        case 3:
            cout<<"Enter the distance and time"<<endl;
            cin>>distance>>time;
            cout<<"The speed is: "<<distance/time<<endl;
            break;
        default:
            cout<<"Invalid choice";

    }

}