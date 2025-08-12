#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "I am working";
    }
};

class student : public human
{
    int roll_number, fees;

public:
    // Constructor
    student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }
};

int main()
{
    student a1("Sachin", 19, 58, 99);
    a1.work();
}