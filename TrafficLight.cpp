#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    cout<<"Traffic Light Simulation"<<endl;
    while(true)
    {
        cout<<"RED Light - STOP"<<endl;
        Sleep(5000);
        cout<<"GREEN Light - GO"<<endl;
        Sleep(5000);
        cout<<"YELLOW Light - SLOW DOWN"<<endl;
        Sleep(5000);
    }
}