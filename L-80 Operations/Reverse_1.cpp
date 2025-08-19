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

NODE* reverseList(NODE *head)
{
    NODE *prev = NULL;
    NODE *curr = head;
    NODE *futu = NULL;

    while (curr)
    {
        futu = curr->next;   // store next
        curr->next = prev;   // reverse pointer
        prev = curr;         // move prev forward
        curr = futu;         // move curr forward
    }

    return prev; // new head
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

    head = reverseList(head);

    cout << "\nReversed List:\n";
    printList(head);

    return 0;
}
