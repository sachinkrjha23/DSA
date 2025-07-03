#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permute(vector<int>& nums, int l, int r) {

    if (l == r) {
        
        // Print the current permutation
        for (int i = 0; i <= r; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = l; i <= r; i++) {

        swap(nums[l], nums[i]);       // Step 1: Fix one element at position 'l'
        
        permute(nums, l + 1, r);      // Step 2: Recurse to permute remaining elements
        
        swap(nums[l], nums[i]);       // Step 3: Backtrack to restore original array
    }
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;  
    vector<int> nums(n);  

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];   
    }

    cout << "All permutations of the array:\n";
    permute(nums, 0, n - 1);  

    return 0;
}
