#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=0;i<=5;i++){
        v1.push_back(i*4);
    }
    cout<<"Vector elements:"<<endl;
    for(auto i=v1.begin();i != v1.end();i++){
        cout<<*i<<endl;
    }
    cout<<"element at position 3:"<<v1[3]<<endl;
    cout<<v1.at(3)<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<"Size of vector:"<<v1.size()<<endl;
    cout<<"Capacity of vector:"<<v1.capacity()<<endl;
    return 0;
}

