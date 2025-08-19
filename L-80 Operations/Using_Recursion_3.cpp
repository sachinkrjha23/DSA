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

NODE* reverseList(NODE* curr, NODE* prev)
{
    if (curr == NULL)
    {
        return prev;  // when we reach the end, prev becomes new head
    }

    NODE* fut = curr->next; // store next
    curr->next = prev;      // reverse pointer
    return reverseList(fut, curr); // recursive call
}

void printList(NODE *head)
{
    NODE *temp = head;
    while (temp)
    {
        cout << "Value: " << temp->data << "  Address: " << temp->next << endl;
        temp = temp->next;
    }
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

    cout << "Original List:\n";
    printList(head);

    head = reverseList(head, NULL);

    cout << "\nReversed List:\n";
    printList(head);

    return 0;
}
