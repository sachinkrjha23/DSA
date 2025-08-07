#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no, balance;

public:
    // Default Constructor
    customer()
    {
        // cout<< "Hello!";
        name = "Sachin";
        acc_no = 234;
        balance = 3450;
    }

    // Parameterized Constructor
    customer(string a, int b, int c)
    {
        name = a;
        acc_no = b;
        balance = c;
    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance;
    }

};

int main()
{
    customer a1;
    a1.display();

    cout<<endl;

    customer a2("Sachin", 23, 5670);
    a2.display();
}