#include<iostream>
using namespace std;
class Box{
    private:
        int len;
    public:
        Box(): len(30){}
        friend int printlen(Box);
};
int printlen(Box b){
    b.len+=2;
    return b.len;
}
int main(){
    Box b;
    cout<<printlen(b)<<endl;
    return 0;
}