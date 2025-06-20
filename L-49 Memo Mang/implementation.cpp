#include <iostream>
using namespace std;

int main()
{
    // Heap Allocation

    int *ptr = new int; // int
    *ptr = 5;
    cout << *ptr << endl;

    float *p = new float; // float
    *p = 5.98;
    cout << *p << endl;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *p1 = new int[n];

    // Take user input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> p1[i];
    }

    // Print
    for (int i = 0; i < n; i++)
    {
        cout << p1[i] << " ";
    }

    // delete
    delete ptr;
    delete p;
    delete[] p1;
}
