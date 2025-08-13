#include <iostream>
using namespace std;

class animal
{
public:
    virtual void speak()
    {
        cout << "Hu Hu\n";
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "Bhaw Bhaw\n";
    }
};

int main()
{
    animal *p;
    p = new dog();
    p->speak();
}