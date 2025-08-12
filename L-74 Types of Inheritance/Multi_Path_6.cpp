#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    void display()
    {
        cout << "My name is: " << name << endl;
    }
};

class Engineer : public virtual Human
{
public:
    string specialization;

    void work()
    {
        cout << "I have specialization in: " << specialization << endl;
    }
};

class Youtuber : public virtual Human
{
public:
    int subscribers;

    void contentCreator()
    {
        cout << "I have a subscriber base of: " << subscribers << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    int salary;

    // Default Constructor
    CodeTeacher()
    {

    }

    CodeTeacher(string name, string specialization, int subscribers, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main()
{
    CodeTeacher a1("Sachin","Cse",50000, 8700);
    a1.display();
}