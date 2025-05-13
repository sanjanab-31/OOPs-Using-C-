#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream file("test.txt",ios::in);
    getline(file,s);
    cout<<s<<endl;
    return 0;

}