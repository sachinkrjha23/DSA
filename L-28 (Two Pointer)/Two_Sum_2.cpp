#include <iostream>
#include <vector>

using namespace std;

// User-defined function to find and print the indices
void twoSum(vector<int> &numbers, int target)
{
    int start = 0, end = numbers.size() - 1;

    while (start < end)
    {
        int sum = numbers[start] + numbers[end];

        if (sum == target)
        {
            cout << "Indices: " << start + 1 << ", " << end + 1 << endl; // Print inside function
            return;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    cout << "No valid indices found!" << endl; // Print if no solution found
}

// Main function to call the user-defined function
int main()
{
    vector<int> numbers = {2, 7, 11, 15}; // Input array (sorted)
    int target = 9;                       // Target sum to find

    twoSum(numbers, target); // Call the function

    return 0;
}
