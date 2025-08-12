#include <iostream>
using namespace std;

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "I have specialization in: " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscribers;

    void contentCreator()
    {
        cout << "I have a subscriber base of: " << subscribers << endl;
    }
};

class Tech : public Engineer, public Youtuber
{
    public:
    string name;

    Tech(string name, string specialization, int subscribers){
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void display(){
        cout<< "My name is: "<<name<<endl;
        work();
        contentCreator();
    }
};

int main()
{
    Tech a1("Sachin","Cse",50000);
    a1.display();
}