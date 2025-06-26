#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pos = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    swap(arr[pos], arr[end]); // Place pivot at correct position
    return pos;               // Return correct pivot index
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
