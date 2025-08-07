#include <iostream>
using namespace std;

class customer
{
    string name;
    int *data;

public:
    // Constructor
    customer()
    {
        name = "Sachin";
        data = new int;
        *data = 10;
        cout << "Constructor is called\n";
    }

    // Destructor
    ~customer()
    {
        delete data; 
        cout << "Destructor is called\n";
    }

    void display()
    {
        cout << "Name: " << name << ", Data: " << *data << endl;
    }
};

int main()
{
    customer a1;
    a1.display();  
    return 0;
}
