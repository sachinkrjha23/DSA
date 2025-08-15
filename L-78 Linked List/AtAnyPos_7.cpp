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
    // Base Case
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
    NODE *head = NULL;
    int arr[] = {4, 6, 8, 10, 12};

    head = CreateLinkedList(arr, 0, 5);

    // At particular pos:
    int x = 3;
    int value = 25;

    NODE *temp = head;
    x--;

    while(x--)
    {
        temp = temp->next;
    }

    NODE *temp2 = new NODE(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print
    temp = head;
    while (temp)
    {
        cout << "Value: " << temp->data << " " << "Address: " << temp->next << endl;
        temp = temp->next;
    }
}
