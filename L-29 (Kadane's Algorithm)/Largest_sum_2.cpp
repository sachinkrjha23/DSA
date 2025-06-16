#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

// Function to find the maximum sum subarray using Kadane's Algorithm
int findMaxSubarraySum(vector<int>& nums) {
    int maxSum = INT_MIN;  // Stores the maximum sum found so far
    int sum = 0;           // Stores the sum of the current subarray

    for (int i = 0; i < nums.size(); i++) {  // Iterating using an index
        sum += nums[i];

        if (sum > maxSum) {
            maxSum = sum;  // Update max sum if needed
        }

        if (sum < 0) {
            sum = 0;  // Reset sum if it goes negative
        }
    }

    return maxSum;
}

int main() {
    vector<int> numbers = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Input array

    cout << "Maximum Sum Subarray: " << findMaxSubarraySum(numbers) << endl;

    return 0;
}