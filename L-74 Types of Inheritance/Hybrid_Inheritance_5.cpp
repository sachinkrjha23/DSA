#include <iostream>
using namespace std;

// Base class
class Student
{
public:
    void study()
    {
        cout << "I am a student." << endl;
    }
};

// Intermediate class 1
class Boy : public Student
{
public:
    void boyInfo()
    {
        cout << "I am a boy." << endl;
    }
};

// Intermediate class 2
class Girl : public Student
{
public:
    void girlInfo()
    {
        cout << "I am a girl." << endl;
    }
};

// Derived class 1
class Male : public Boy
{
public:
    void maleInfo()
    {
        cout << "I am male." << endl;
    }
};

// Derived class 2
class Female : public Girl
{
public:
    void femaleInfo()
    {
        cout << "I am female." << endl;
    }
};

int main()
{
    Male m;
    m.study();    // From Student
    m.boyInfo();  // From Boy
    m.maleInfo(); // From Male

    cout << "----------" << endl;

    Female f;
    f.study();      // From Student
    f.girlInfo();   // From Girl
    f.femaleInfo(); // From Female

    return 0;
}
