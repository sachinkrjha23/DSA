// Geeks for Geeks

#include <iostream>
using namespace std;

int countTrailingZeros(int n) {
    int count = 0;
    
    // Keep dividing n by powers of 5
    while (n >= 5) {
        count += n / 5; // Count multiples of 5
        n /= 5; // Move to next power of 5
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = countTrailingZeros(n);
    cout << "Number of trailing zeros in " << n << " is " << result << endl;

}