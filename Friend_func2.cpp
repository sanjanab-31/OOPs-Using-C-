#include<iostream>
using namespace std;
class student;
class grade{
    public:
        void average(student& obj);
};
class student{
    private:
        int mark1;
    protected:
        int mark2;
    public:
        student()
        {
            mark1=90;
            mark2=99;
        }
        friend void grade::average(student&);
};
void grade::average(student& obj){
    cout<<"Average of marks is: "<<(obj.mark1 + obj.mark2)/2<<endl;
}
int main(){
    student obj1;
    grade obj2;
    obj2.average(obj1);
    return 0;
}
