#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int x=i++ + ++i + ++i  + i++ + ++i;
    cout<<x<<endl;
    cout << "Completed the task" << endl;
   
    return 0;
}