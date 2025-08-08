#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no, balance;
    static int total_customer; // it is part of class

public:
    customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;
    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance << " " << total_customer;
    }
};

int customer::total_customer = 0;

int main()
{
    customer a1("Sachin", 23, 5670);
    a1.display();
    cout << endl;

    customer a2("Piyush", 3, 5600);
    a2.display();
    cout << endl;

    customer a3("XYZ", 2, 2890);
    a3.display();
}