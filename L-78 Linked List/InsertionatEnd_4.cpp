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

int main()
{
    NODE *head  = NULL;
    NODE *tail  = NULL;

    int arr[] = {4,6,8,10,12};

    // Insert the Node at end

    // Linked List doesn't exist

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new NODE(arr[i]);
            tail = head;
        }

        // Linked List exists
        else
        {
            tail->next = new NODE(arr[i]);
            tail = tail->next;
        }
    }

    // Print
    NODE *temp = head;
    while (temp)
    {
        cout << "Value: " << temp->data << " " << "Address: " << temp->next << endl;
        temp = temp->next;
    }
}
