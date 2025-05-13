#include<iostream>
using namespace std;
class b;
class a
{
    int x=4;
    friend class b;
};
class b
{
    public:
        void display(a &aa)
        {
            cout<<"Value of x is: "<<aa.x<<endl;
        }
      
};
int main()
{
    a aa;
    b bb;
    bb.display(aa);
    return 0;
}