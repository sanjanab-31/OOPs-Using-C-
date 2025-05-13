// lambda
// syntax:
// [capture](parameter){ 
//    // body
// };
// []-->capture
//   ->it is used to capture the variables used for the function.
//   ->it will not accept any values from outside.
//   [&]->it will accept reference of the variables.
//   [=]->it will accept the value of the variables.
//   [&a,b]->it will accept the reference of the variables a and b.

// ARGUMENTS
//  ->(int a)
//    (float b)
//    (int c, float d)

//Codes->return
// 

/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    auto ans=[=](){
        return a+b;
    };
    cout<<ans();
    return 0;
}
*/
/*/
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    auto ans=[&](){
        a=22;
        b=98;
        return a+b;
    };
    cout<<ans();
    return 0;
}*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    auto ans=[&](){
        int count = 0;
        for(int x:v)
        {
            if(x%2==0)
            {
                count++;
            }
        }
        return count;
    };
    cout<<ans();
    return 0;
}
*/
/*
#include<iostream>
#include<thread>
using namespace std;
void print(int id_)
{
    cout << "Hello World from thread " << id_ << endl;
}
int main()
{
    thread t1(print, 1);
    cout << "Completed the task" << endl;
    t1.join();
    return 0;
}*/

/*
In mutex there is an disadvantge that once excetued it stores the reference and every ti,e it was called the reference will will be called
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex mtx;
void print(int id_)
{
    mtx.lock();
    cout << "Hello World " << id_ << endl;
    mtx.unlock();
}
int main()
{
    thread t1(print, 1);
    thread t2(print, 2);
    t1.join();
    t2.join();
    cout << "Completed the task" << endl;
   
    return 0;
}
*/

/*
load()
wait()->wait until first is completed
despatch()
fetch()
test()
*/

