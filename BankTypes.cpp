// Develop a class heirarchy for the different types of bank accounut

#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    protected:
        string name;
        int account_no;
        float acct_balance;
    public:
        BankAccount(string n, int a, float b) : name(n), account_no(a), acct_balance(b) {}
        virtual void deposit_money(float b) = 0; // Pure virtual function
        virtual void withdraw_money(float b) = 0; // Pure virtual function
        virtual void display_account() = 0; // Pure virtual function
};
class SavingsAccount : public BankAccount
{
    public:
        SavingsAccount(string n, int a, float b) : BankAccount(n, a, b) {}
        void deposit_money(float b) override
        {
            acct_balance += b;
        }
        void withdraw_money(float b) override
        {
            if(acct_balance >= b)
            {
                acct_balance -= b;
            }
            else
            {
                cout << "Insufficient balance" << endl;
            }
        }
        void display_account() override
        {
            cout << "Savings Account" << endl;
            cout << "Name: " << name << endl;
            cout << "Account Number: " << account_no << endl;
            cout << "Account Balance: " << acct_balance << endl;
        }
};
class CurrentAccount : public BankAccount
{
    public:
        CurrentAccount(string n, int a, float b) : BankAccount(n, a, b) {}
        void deposit_money(float b) override
        {
            acct_balance += b;
        }
        void withdraw_money(float b) override
        {
            if(acct_balance >= b)
            {
                acct_balance -= b;
            }
            else
            {
                cout << "Insufficient balance" << endl;
            }
        }
        void display_account() override
        {
            cout << "Current Account" << endl;
            cout << "Name: " << name << endl;
            cout << "Account Number: " << account_no << endl;
            cout << "Account Balance: " << acct_balance << endl;
        }
};

class FixedDepositAccount : public BankAccount
{
    private:
        float interest_rate;
    public:
        FixedDepositAccount(string n, int a, float b, float r) : BankAccount(n, a, b), interest_rate(r) {}
        void deposit_money(float b) override
        {
            acct_balance += b;
        }
        void withdraw_money(float b) override
        {
            cout << "Withdrawal not allowed from Fixed Deposit Account" << endl;
        }
        void display_account() override
        {
            cout << "Fixed Deposit Account" << endl;
            cout << "Name: " << name << endl;
            cout << "Account Number: " << account_no << endl;
            cout << "Account Balance: " << acct_balance << endl;
            cout << "Interest Rate: " << interest_rate << "%" << endl;
        }
};
int main()
{
    BankAccount* account1 = new SavingsAccount("John", 12345, 1000.0);
    account1->deposit_money(500);
    account1->withdraw_money(200);
    account1->display_account();

    BankAccount* account2 = new CurrentAccount("Jane Smith", 67890, 2000.0);
    account2->deposit_money(1000);
    account2->withdraw_money(500);
    account2->display_account();

    BankAccount* account3 = new FixedDepositAccount("Alice Brown", 11223, 5000.0, 5.0);
    account3->deposit_money(1000); // Allowed
    account3->withdraw_money(200); // Not allowed
    account3->display_account();

    delete account1;
    delete account2;
    delete account3;

    return 0;
}