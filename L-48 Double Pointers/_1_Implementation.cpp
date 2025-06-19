#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p = &n;     // Single Pointer
    int **p1 = &p;   // Double Pointer
    int ***p2 = &p1; // Triple Pointer

    // cout << p << endl;
    // cout << p1 << endl;
    // cout << p2 << endl;

    // Value ko modify karna ho, jo n me hai..
    *p = *p + 5;   // n = 15
    cout << n << endl;

    **p1 = **p1 + 5;    // n = 20
    cout << n << endl;

    ***p2 = ***p2 + 5;    // n = 25
    cout << n << endl;
}