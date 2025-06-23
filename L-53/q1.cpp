#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        int result = fact(n);
        cout << "Factorial of " << n << " is " << result << ".";
    }
}