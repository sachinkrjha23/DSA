#include <iostream>
using namespace std;

double power(double n, int m)
{
    // 0^0 defined as 1 by convention
    if (n == 0 && m == 0)
        return 1;

    if (n == 0)
        return 0;

    if (m == 0)
        return 1;

    if (m > 0)
        return n * power(n, m - 1);

    return 1.0 / power(n, -m);
}

int main()
{
    double n;
    int m;
    cout << "Enter base (n): ";
    cin >> n;
    cout << "Enter exponent (m): ";
    cin >> m;

    double result = power(n, m);
    cout << n << " raised to the power " << m << " is " << result << ".";

    return 0;
}
