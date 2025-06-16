#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    // Declare an array to store Fibonacci terms
    int fibonacci[n];

    // Initialize the first two terms
    fibonacci[0] = 0;
    if (n > 1) {
        fibonacci[1] = 1;
    }

    // Generate the Fibonacci series
    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Print the Fibonacci series
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci[i] << " ";
    }
    cout << endl;

    return 0;
}
