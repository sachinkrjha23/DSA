// Create a node

#include<iostream>
using namespace std;

class NODE
{
    public:
    int data;
    NODE *next;

    // M-2
    NODE (int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    NODE  * HEAD;

    // M-1
    // HEAD = new NODE();
    // HEAD->data = 4;
    // HEAD->next = NULL;

    // M-2
    HEAD = new NODE(4);
}