#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findPairWithDifference(vector<int> &numbers, int targetDiff)
{
    // Print original array
    cout << "Original Array: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Sort the array
    sort(numbers.begin(), numbers.end());

    // Print sorted array
    cout << "Sorted Array:   ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Target Difference: " << targetDiff << endl;

    int start = 0, end = 1;

    while (end < numbers.size())
    {
        int diff = numbers[end] - numbers[start];

        if (diff == targetDiff && start != end)
        {
            cout << "Required Pair: (" << numbers[start] << ", " << numbers[end] << ")" << endl;
            return;
        }
        else if (diff < targetDiff)
        {
            end++;
        }
        else
        {
            start++;
        }
    }

    cout << "No valid pair found!" << endl;
}

int main()
{
    vector<int> numbers = {1, 9, 8, 4, 2}; // Input array
    int targetDiff = 5;                    // Target difference

    findPairWithDifference(numbers, targetDiff); // Call the function

    return 0;
}
