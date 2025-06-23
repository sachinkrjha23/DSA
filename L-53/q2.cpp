#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Enter a natural number.";
    }
    else
    {
        int result = sum(n);
        cout << "Sum of first " << n << " natural numbers is " << result << ".";
    }

    return 0;
}
