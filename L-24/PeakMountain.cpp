#include <iostream>
using namespace std;

int peakElementIndex(int arr[], int n)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = end + (start - end) / 2;

        // If the key is found, return the index
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[1000];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = peakElementIndex(arr, n);
    if (index != -1)
    {
        cout << "The highest element is: " << arr[index] << " at index: " << index << endl;
    }
    else
    {
        cout << "No peak element found." << endl;
    }

    return 0;
}