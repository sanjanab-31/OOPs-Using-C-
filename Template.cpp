/*
#include<iostream>
using namespace std;
template<typename T>
class Test{
    T ans;
    public:
    Test(T n){
        ans=n;
    }
    T getdetails(){
        return ans;
    }
};
int main(){
    Test<int> num(10);
    Test<float> num1(10.5);
    cout<<num.getdetails()<<endl;
    cout<<num1.getdetails()<<endl;
    return 0;

}

*/

/*
#include<iostream>
using namespace std;
template<class A,class B>
class Student{
    A rollno;
    B name;
    public:
    Student(){
        cout<<"Constructor is called"<<endl;
    }
    Student(A num,B name1){
        rollno=num;
        name=name1;
    }

    
};
int main(){
    Student<int,string> s1;
    Student<string,string> s2("123","abc");
    return 0;
}
*/