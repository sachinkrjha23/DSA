#include<iostream>
using namespace std;

class NODE
{
    public:
    int data;
    NODE *next;

    NODE (int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    NODE  *HEAD;
    HEAD = new NODE(4);

    // Printing the Linked List
    cout<<HEAD->data<<" "<< HEAD->next<<endl;
}
