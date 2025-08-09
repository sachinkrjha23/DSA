#include <iostream>
using namespace std;

// Public, Private, Protected access
class Human
{
    public:
    // private:
    // protected:
    string name;
    int age, weight;
};

class student : public Human
{
    int roll_number, fees;

};

int main()
{
    student a;
    a.name = "Sachin";
}