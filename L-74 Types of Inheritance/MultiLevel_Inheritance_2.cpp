#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    void introduce()
    {
        cout << "Hello, my name is: " << name << endl;
    }
};

class employee : public person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "My monthly salary is: " << salary << endl;
    }
};

class manager : public employee
{
public:
    string dept;

    manager(string name, int salary, string dept)
    {
        this->name = name;
        this->salary = salary;
        this->dept = dept;
    };

    void work()
    {
        cout << "I am leading the departmwnt: " << dept << endl;
    }
};

int main()
{
    manager a1("Sachin", 2400, "CSE");
    a1.introduce();
    a1.monthly_salary();
    a1.work();
}