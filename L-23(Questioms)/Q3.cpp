#include <iostream>
using namespace std;

int mySqrt(int x) {
    // Handle the edge cases for 0 and 1
    if (x == 0 || x == 1) {
        return x;
    }

    int start = 1, end = x, mid, result;
    
    // Perform binary search
    while (start <= end) {
        mid = start + (end - start) / 2;  // Calculate mid to prevent overflow
        int midSquared = mid * mid;  // Square of mid

        if (midSquared == x) {
            return mid;  // If mid squared equals x, return mid
        }
        else if (midSquared < x) {
            start = mid + 1;  // If mid squared is less than x, search in the right half
            result = mid;  // Keep track of the largest valid mid
        }
        else {
            end = mid - 1;  // If mid squared is greater than x, search in the left half
        }
    }
    
    return result;  // Return the largest mid whose square is less than or equal to x
}

int main() {
    int x;

    // Taking input from the user
    cout << "Enter a non-negative integer: ";
    cin >> x;

    // Find the square root rounded down
    int result = mySqrt(x);

    // Output the result
    cout << "The square root of " << x << " rounded down is: " << result << endl;

    return 0;
}
