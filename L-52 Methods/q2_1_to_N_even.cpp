#include <iostream>
using namespace std;

/*  void printEven(int start, int end) {
    if (start > end)
        return;

    cout << start << " ";
    printEven(start + 2, end);
}

int main() {
    int n, m;
    cout << "Enter start (n): ";
    cin >> n;

    cout << "Enter end (m): ";
    cin >> m;

    if (n % 2 != 0)
        n++;

    cout << "Even numbers from " << n << " to " << m << ":\n";
    printEven(n, m);

    return 0;
}   */


void printEven(int n) {
    if (n == 0)
        return;

    printEven(n - 1);  

    if (n % 2 == 0)
        cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Even numbers from 1 to " << n << ":\n";
    printEven(n);

    return 0;
}
