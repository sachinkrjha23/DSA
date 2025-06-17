#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin >> n;

    // Check for factor 2
    if (n % 2 == 0) {
        cout << 2 << " ";
        while (n % 2 == 0)
            n /= 2;
    }

    // Check for odd prime factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cout << i << " ";
            while (n % i == 0)
                n /= i;
        }
    }

    // If remaining n is a prime > 2
    if (n > 2)
        cout << n;

    return 0;
}
