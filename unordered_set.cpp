// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<int> uset={5,1,2,3,2};
//     for(int x: uset)
//     {
//         cout<<x<<endl;
//     }
// return 0;
// }


// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;
// int main()
// {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     cout<<v1.size()<<endl;
//     cout<<v1.capacity()<<endl;
//     for(auto val:v1)
//     {
//         cout<<val<<endl;
//     }
// }


#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<string> uset;
    uset.insert("apple");
    uset.insert("banana");
    uset.insert("orange");
    if(uset.find("apple") != uset.end())
    {
        cout<<"apple is present"<<endl;
    }
    for(auto &x: uset)
    {
        cout<<x<<endl;
    }
}