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
    NODE *head = NULL;
    int arr[] = {4, 6, 8, 10, 12};
    int size = 5;

    head = new NODE(arr[0]);  // Create first node
    NODE *temp = head;        

    for (int i = 1; i < size; i++)
    {
        NODE *temp2 = new NODE(arr[i]);
        temp->next = temp2; // Link current last node to new node
        temp = temp2;       // Move temp to new last node
    }

    // Insert at a particular position
    int x = 3;    // 1-based position to insert AFTER
    int value = 25;

    temp = head;
    x--; // Moves needed to reach the node before insertion

    while (x--)
    {
        temp = temp->next;
    }

    NODE *temp2 = new NODE(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print linked list
    temp = head;
    while (temp)
    {
        cout << "Value: " << temp->data << " "
             << "Address: " << temp->next << endl;
        temp = temp->next;
    }

    return 0;
}
