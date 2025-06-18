#include <iostream>
using namespace std;

int main()
{

    int a = 12;

    // Print the address of 'a'

    cout << &a << endl;
    int *ptr = &a;
    cout << ptr << endl;

    // Print the value inside 'a'

    cout << *ptr << endl;

    // Change the element inside pointer

    int b = 20;
    cout << &b << endl;
    ptr = &b;  // Once pointer is declared no need to declare data type and '*' again
    cout << ptr << endl;

    // Print the value inside 'b'

    cout << *ptr << endl;

    // Value after updatng 'b'

    b = 35;
    cout << ptr << endl; // Address doesn't change
    cout << *ptr << endl;
}