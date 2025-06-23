#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{
    if (index == size)
        return; // Base case

    cout << arr[index] << " ";
    printArray(arr, size, index + 1); // Recursive call for next element
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

    cout << "Array elements are:\n";
    printArray(arr, n, 0);

    return 0;
}