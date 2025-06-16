// (HARD)
// Q) First and last position of an element in sorted array
#include <iostream>
using namespace std;

void findFirstAndLast(int arr[], int n, int key)
{

    int start = 0, end = n - 1, mid, first = -1, last = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1; // Continue searching in the left half for first occurrence
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Find last occurrence
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1; // Continue searching in the right half for last occurrence
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Output the results
    if (first != -1 && last != -1)
    {
        cout << "First position: " << first << ", Last position: " << last << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
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

    int key;
    cout << "Enter key: ";
    cin >> key;

    findFirstAndLast(arr, n, key);
    return 0;
}