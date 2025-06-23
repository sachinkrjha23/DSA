#include <iostream>
using namespace std;

int sum(int arr[], int size, int index)
{
    if (index == size)
        return 0;  
    else    
        return arr[index] + sum(arr, size, index + 1);
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

    int totalSum = sum(arr, n, 0);  // Start sum from index 0

    cout << "Sum of array elements is: " << totalSum << endl;

    return 0;
}
