#include <iostream>
#include <algorithm>
using namespace std;

bool find3Numbers(int arr[], int n, int target)
{
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Fix one element and use two pointers
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target)
            {
                cout << "Triplet found: " << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
                return true;
            }
            else if (sum < target)
            {
                left++; // Move left pointer to increase sum
            }
            else
            {
                right--; // Move right pointer to decrease sum
            }
        }
    }
    cout << "No triplet found" << endl;
    return false;
}

// Example usage
int main()
{
    int arr[] = {12, 3, 6, 9, 34, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 21;

    find3Numbers(arr, n, target);
    return 0;
}