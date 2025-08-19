#include <iostream>
#include <vector>
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

void reverseValues(NODE *head)
{
    vector<int> ans;
    NODE *temp = head;

    while (temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }

    int i = ans.size() - 1;
    temp = head;
    while (temp != NULL)
    {
        temp->data = ans[i--];
        temp = temp->next;
    }
}

void printList(NODE *head)
{
    NODE *temp = head;
    while (temp != NULL)
    {
        cout << "Value: " << temp->data << "  Address: " << temp->next << endl;
        temp = temp->next;
    }
}

int main()
{
    NODE *head = NULL;
    NODE *tail = NULL;

    int arr[] = {1, 2, 3, 4, 5};

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

    reverseValues(head);

    cout << "\nList After Reversing Values:\n";
    printList(head);

    return 0;
}
