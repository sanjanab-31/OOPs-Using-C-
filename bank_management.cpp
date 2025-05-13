// implement a bank managemnet system with C++ functions to handle transactions account balances and user authenticates ,thereby enhancing modularity ,code reusability and the overall efficieny of the program
#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
        string name;
        int account_no;
        float acct_balance;
    public:
        void open_account(string n,int a,float b);
        void deposit_money(float b);
        void withdraw_money(float b);
        void display_account();
};
void bank::open_account(string n,int a,float b)
{
    name=n;
    account_no=a;
    acct_balance=b;
}
void bank::deposit_money(float b)
{
    acct_balance+=b;    
}
void bank::withdraw_money(float b)
{
    if(acct_balance>=b)
    {
        acct_balance-=b;
    }
    else
    {
        cout<<"Insufficient balance"<<endl;
    }
}
void bank::display_account()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<account_no<<endl;
    cout<<"Account Balance: "<<acct_balance<<endl;
}
int main()
{
    bank b;
    string name;
    int account_no;
    float acct_balance;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter account number: ";
    cin>>account_no;
    cout<<"Enter account balance: ";
    cin>>acct_balance;
    b.open_account(name,account_no,acct_balance);
    b.deposit_money(500);
    b.withdraw_money(200);
    b.display_account();
    return 0;
}