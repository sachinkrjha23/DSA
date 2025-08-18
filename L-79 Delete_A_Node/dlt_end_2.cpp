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
    NODE *Head;
    Head = NULL;

    int arr[] = {2, 3, 5, 7, 9};

    Head = CreateLinkedList(arr, 0, 5);

    // Delete a Node at end

    // Edge Case - 1:  Linked List exists
    if (Head != NULL)
    {
        // Edge Case - 2: Only 1 Node is present
        if (Head->next == NULL)
        {
            NODE *temp = Head;
            delete temp;
            Head = NULL;
        }

        // Edge Case - 3: More than 1 Node is present
        else
        {
            NODE *curr = Head;
            NODE *prev = NULL;

            // curr->next is not null

            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
        }
    }

    NODE *temp = Head;
    while (temp)
    {
        cout << "Value: " << temp->data << " " << "Address: " << temp->next << endl;
        temp = temp->next;
    }
}