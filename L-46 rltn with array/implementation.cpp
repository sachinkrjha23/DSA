#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // Print the address of first element
    cout << arr << endl;
    cout << &arr[0] << endl;
    int *ptr = arr;
    cout << ptr << endl;

    // Print the address of second element
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;

    // Print the value of an index
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *ptr << endl;

    // Print the address of elements
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << " ";
    }
    cout << endl;

    // Print the value of indexes
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }
}