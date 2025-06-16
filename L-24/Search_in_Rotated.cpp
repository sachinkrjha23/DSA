#include <iostream>
using namespace std;

int findInsertIndex(int arr[], int n, int target)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // If the target is found
        if (arr[mid] == target)
        {
            return mid;
        }

        // Left side is sorted
        else if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1; // Target is in the left sorted portion
            }
            else
            {
                start = mid + 1; // Target is in the right unsorted portion
            }
        }
        // Right side is sorted
        else
        {
            if (arr[mid] < target && target <= arr[end])
            {
                start = mid + 1; // Target is in the right sorted portion
            }
            else
            {
                end = mid - 1; // Target is in the left unsorted portion
            }
        }
    }

    // If target is not found
    return -1;
}

int main()
{
    int arr[1000];
    int n;

    // Taking input from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = findInsertIndex(arr, n, target);
    cout << "The index is: " << index << endl;

    return 0;
}
