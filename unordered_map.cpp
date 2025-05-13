#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> marks;
    marks["Alice"]=1;
    marks["Bob"]=2;
    marks["Charlie"]=3;
    marks<<"Alice's marks: "<<marks["Alice"]<<endl;
    cout<<"Size of unordered_map: "<<marks.size()<<endl;
    cout<<"Elements in unordered_map:"<<endl;
    for(auto &x: marks)
    {
        cout<<x.first<<": "<<x.second<<endl;
    }
    cout<<"Value associated with key 'Bob': "<<marks["Bob"]<<endl;
    return 0;
}