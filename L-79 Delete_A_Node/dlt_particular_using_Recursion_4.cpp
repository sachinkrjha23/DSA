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

int getLength(NODE *head)
{
    int length = 0;
    while (head)
    {
        length++;
        head = head->next;
    }
    return length;
}

// Recursive delete function
NODE* deleteNode(NODE* curr, int pos)
{
    if (curr == NULL)  // Empty list
        return NULL;

    if (pos == 1) // Delete this node
    {
        NODE* temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deleteNode(curr->next, pos - 1);
    return curr;
}

int main()
{
    NODE *head = NULL;
    NODE *tail = NULL;

    int arr[] = {4, 6, 8, 10, 12};

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new NODE(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new NODE(arr[i]);
            tail = tail->next;
        }
    }

    int length = getLength(head);

    int x;
    cout << "Enter position to delete: ";
    cin >> x;

    if (x < 1 || x > length)
    {
        cout << "Invalid position! Valid range is 1 to " << length << endl;
    }
    else
    {
        head = deleteNode(head, x);
    }

    // Print updated list
    NODE *temp = head;
    cout << "Updated list:\n";
    while (temp)
    {
        cout << "Value: " << temp->data << "  Address: " << temp->next << endl;
        temp = temp->next;
    }
}
