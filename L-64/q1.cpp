#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive function to generate all permutations of the array
void permute(vector<int>& nums, int l, int r) {

    // Base Case: If left index equals right index, we have a complete permutation
    if (l == r) {
        
        // Print the current permutation
        for (int i = 0; i <= r; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        return;
    }

    // Loop to swap each element with the current index 'l' and recurse
    for (int i = l; i <= r; i++) {

        swap(nums[l], nums[i]);       // Step 1: Fix one element at position 'l'
        
        permute(nums, l + 1, r);      // Step 2: Recurse to permute remaining elements
        
        swap(nums[l], nums[i]);       // Step 3: Backtrack to restore original array
    }
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;   // Taking size of the array as input

    vector<int> nums(n);  // Creating a vector to store 'n' elements

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];   // Taking array elements as input
    }

    cout << "All permutations of the array:\n";
    permute(nums, 0, n - 1);  // Calling the permutation function

    return 0;
}
