#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;

    NODE(int value)
    {
        data = value;
        next = NULL;
    }
};

NODE *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    NODE *temp;
    temp = new NODE(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    NODE *Head;
    Head = NULL;

    int arr[] = {2, 3, 5, 7, 9};

    Head = CreateLinkedList(arr, 0, 5);

    // Delete a Node at start
    if(Head!=NULL)
    {
        NODE *temp = Head;
        Head = Head->next;
        delete temp;
    }

    NODE *temp = Head;
    while (temp)
    {
        cout << "Value: " << temp->data << " " << "Address: " << temp->next << endl;
        temp = temp->next;
    }
}