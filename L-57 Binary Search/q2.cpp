#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
    if (start > end)
        return -1; // Base case: not found

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
        return binarySearch(arr, start, mid - 1, target); // Search left half

    return binarySearch(arr, mid + 1, end, target); // Search right half
}

int main()
{
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a valid size for the array.\n";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << target << " found at index " << result << ".\n";
    else
        cout << target << " not found in the array.\n";

    return 0;
}
