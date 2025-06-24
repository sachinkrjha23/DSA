#include <iostream>
using namespace std;

bool search(int arr[], int size, int index, int target)
{
    if (index == size)
        return false;

    if (arr[index] == target)
        return true;

    return search(arr, size, index + 1, target);
}

int main()
{
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Enter a valid number";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> target;

    if (search(arr, n, 0, target))
        cout << target << " is present in the array.\n";
    else
        cout << target << " is not present in the array.\n";

    return 0;
}
