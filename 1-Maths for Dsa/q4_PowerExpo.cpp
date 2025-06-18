#include <iostream>
using namespace std;

int main() {
    long long base, exp;
    cout << "Enter base and exponent (a^b): ";
    cin >> base >> exp;

    long long result = 1;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }

    cout << "Result: " << result << endl;
    return 0;
}