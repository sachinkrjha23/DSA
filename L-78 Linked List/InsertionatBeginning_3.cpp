#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;

    NODE(int value)
    {
        value = data;
        next = NULL;
    }
};

int main()
{
    NODE *HEAD;
    HEAD = NULL;

    int arr[] = {2, 3, 4, 5, 6};

    // Insert the Node at beginning

    // Linked List doesn't exist

    for (int i = 0; i < 5; i++)
    {
        if (HEAD == NULL)
        {
            HEAD = new NODE(arr[i]);
        }

        // Linked List exists
        else
        {
            NODE *temp;
            temp = new NODE(arr[i]);
            temp->next = HEAD;
            HEAD = temp;
        }
    }

    // Print
    NODE *temp = HEAD;
    while (temp)
    {
        cout << "Value: " << temp->data << " " << "Address: " << temp->next << endl;
        temp = temp->next;
    }
}
