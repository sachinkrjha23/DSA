#include <iostream>
using namespace std;

int sumOfSquares(int n)
{
    if (n == 0)
        return 0;
    else
        return (n * n) + sumOfSquares(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Sum of squares is not defined for negative numbers.";
    }
    else
    {
        int result = sumOfSquares(n);
        cout << "Sum of squares of first " << n << " natural numbers is " << result << ".";
    }

    return 0;
}
