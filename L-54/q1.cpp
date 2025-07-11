#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter n (position of Fibonacci number): ";
    cin >> n;

    if (n < 0)
    {
        cout << "Fibonacci number is not defined for negative positions.";
    }
    else
    {
        int result = fibonacci(n);
        cout << "Fibonacci number at position " << n << " is " << result << ".";
    }

    return 0;
}
