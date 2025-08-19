// Method - 1: Without Recursion

// #include <iostream>
// using namespace std;

// class NODE
// {
// public:
//     int data;
//     NODE *next;

//     NODE(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// NODE* findMiddleIterative(NODE *head)
// {
//     if (!head) return NULL;

//     NODE *slow = head;
//     NODE *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;

//         // compact form is: fast = fast->next->next;
//         fast = fast->next;
//         if (fast != NULL)
//             fast = fast->next;
//     }
//     return slow; // second middle if even
// }

// void printList(NODE *head)
// {
//     NODE *temp = head;
//     while (temp)
//     {
//         cout << "Value: " << temp->data << "  Address: " << temp->next << endl;
//         temp = temp->next;
//     }
// }

// int main()
// {
//     NODE *head = NULL;
//     NODE *tail = NULL;

//     int arr[] = {4, 6, 8, 10, 12, 14};  // even length

//     for (int i = 0; i < 6; i++)
//     {
//         if (head == NULL)
//         {
//             head = new NODE(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             tail->next = new NODE(arr[i]);
//             tail = tail->next;
//         }
//     }

//     cout << "Full List:\n";
//     printList(head);

//     NODE *mid = findMiddleIterative(head);
//     cout << "\nMiddle Node: " << mid->data <<  "\nAddress: " <<  mid->next << endl;

//     return 0;
// }


// Method - 2: Recursion

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

// recursive fast/slow style
NODE* findMiddleRecursive(NODE *slow, NODE *fast)
{
    if (fast == NULL || fast->next == NULL)
        return slow;

    return findMiddleRecursive(slow->next, fast->next->next);
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

    int arr[] = {1, 2, 3, 4, 5, 6, 7};  // odd length

    for (int i = 0; i < 7; i++)
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

    cout << "Full List:\n";
    printList(head);

    NODE *mid = findMiddleRecursive(head, head);
    cout << "\nValue: " << mid->data << endl;
    cout << "\nAddress: " << mid->next << endl;

    return 0;
}
