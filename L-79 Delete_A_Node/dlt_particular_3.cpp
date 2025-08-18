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

int main()
{
    NODE *head = NULL;
    NODE *tail = NULL;

    int arr[] = {4, 6, 8, 10, 12};

    // Insert at end
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

    // Find length of list for range checking
    int length = getLength(head);

    // Delete at a particular position (1-based indexing)
    int x;
    cout << "Enter position to delete: ";
    cin >> x;

    if (x < 1 || x > length)
    {
        cout << "Invalid position! Valid range is 1 to " << length << endl;
    }
    else if (x == 1)
    {
        NODE *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        NODE *curr = head;
        NODE *prev = NULL;

        while (x-- && curr != NULL)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
    }

    NODE *temp = head;
    cout << "Updated list:\n";
    while (temp)
    {
        cout << "Value: " << temp->data << "  Address: " << temp->next << endl;
        temp = temp->next;
    }
}
