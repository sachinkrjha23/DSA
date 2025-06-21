#include <iostream>
using namespace std;

void bday(int d)
{
    // Base Case
    if (d == 0)
    {
        cout << "Happy Birthday\n";
        return;
    }
    cout << d << " days left for birthday\n";
    bday(d - 1);
}

int main()
{
    int n, m;

    // Input for Iterative Approach
    cout << "Enter days for Iterative: ";
    cin >> n;

    cout << "\nIterative Approach:\n";
    for (int i = n; i > 0; i--)
    {
        cout << i << " days left for birthday\n";
    }
    cout << "Happy Birthday\n\n";

    // Input for Recursive Approach
    cout << "Enter days for Recursive: ";
    cin >> m;

    cout << "\nRecursive Approach:\n";
    bday(m);

    return 0;
}
