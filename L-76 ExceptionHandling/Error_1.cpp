#include <iostream>
using namespace std;

class customer
{
    string name;
    int balance, acc_num;

public:
    customer(string name, int balance, int acc_num)
    {
        this->name = name;
        this->balance = balance;
        this->acc_num = acc_num;
    }

    // deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount " << amount << " credited succesfully\n";
        }
        else
        {
            throw "Amount should be  greater than 0\n";
        }
    }

    // withdraw
    void withdraw(int amount)
    {

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount " << amount << " debited succesfully\n";
        }

        else if (amount < 0)
        {
            throw "Amount should be grreater than 0\n";
        }

        else
        {
            throw "Your balance is low\n";
        }
    }
};

int main()
{
    customer c1("Sachin", 5600, 56);

    try
    {
        c1.deposit(100);
        c1.withdraw(5701);
    }
    catch (const char *e)
    {
        cout << "Exception Occured: " << e << endl;
    }
}