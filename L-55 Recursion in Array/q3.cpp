#include <iostream>
using namespace std;

int findMin(int arr[], int size, int index)
{
    if (index == size - 1)
        return arr[index];  // Base case: last element

    int smallMin = findMin(arr, size, index + 1);  // Recursive call for next elements

    if (arr[index] < smallMin)
        return arr[index];
    else
        return smallMin;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";

    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    int minValue = findMin(arr, n, 0);  // Start from first index (0)

    cout << "Minimum element in the array is: " << minValue << " at index "<< i << endl;

    return 0;
}