#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // // Print the address of first element
    // cout << arr << endl;
    // cout << arr+0 << endl;
    // cout << &arr[0] << endl;
    // cout << ptr << endl;

    // // Print the address of second element
    // cout << arr + 1 << endl;
    // cout << &arr[1] << endl;
    // cout << ptr + 1 << endl;

    // // Print the value of an index
    // cout << arr[0] << endl;
    // cout << *arr << endl;
    // cout << *(arr+0) << endl;
    // cout << *ptr << endl;

    // Print the address of elements
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << " ";
    }
    cout << endl;

    // Print the value of indexes
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // Arithmetic Operations ptr++, ptr--

    // Print all values
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    ptr = arr+4;  // Move ptr to the last element as its outside due to prev loop
    for (int i = 4; i >= 0; i--)
    {
        cout << *ptr << " ";
        ptr--;
    }
    cout << endl;
}