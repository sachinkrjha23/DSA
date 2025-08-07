#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no, balance;

public:

    // Parameterized Constructor
    customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // Inline Constructor
    

    void display()
    {
        cout << name << " " << acc_no << " " << balance;
    }

};

int main()
{
    customer a2("Sachin", 23, 5670);
    a2.display();
}