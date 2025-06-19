#include <iostream>
using namespace std;

void fun(int *p)
{
    *p = *p + 5; // Value change
    p++;         // Address change
}

void funn(int **p1)
{
    *p1 = *p1 + 1;
}

int main()
{
    int n = 10;
    int *p = &n;     // Single Pointer
    int **p1 = &p;   // Double Pointer
    int ***p2 = &p1; // Triple Pointer

    fun(p);
    cout << n << endl; // Value change

    cout << p << endl; // Initial Address
    funn(p1);
    cout << p << endl; // Changed Address
}