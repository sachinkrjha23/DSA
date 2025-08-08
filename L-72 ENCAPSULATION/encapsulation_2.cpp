#include <iostream>
using namespace std;

class customer
{
    string name;
    int balance;

public:
    customer(string a, int b)
    {
        name = a;
        balance = b;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid Amount";
            cout << endl;
        }
    }

    void display()
    {
        cout << name << " " << " " << balance;
    }
};

int main()
{
    customer a1("Sachin", 5670);
    // a1.deposit(3270);
    a1.deposit(-3270);
    a1.display();
}