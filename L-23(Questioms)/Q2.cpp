// Q) Find key position and if key is not found, return the index where it would be inserted

#include <iostream>
using namespace std;

int findInsertIndex(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;

    while (start <= end) {
        mid = start + (end - start) / 2;
        
        // If the key is found, return the index
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    // If key is not found, return the index where it would be inserted
    return start;
}

int main()
{
    int arr[1000];
    int n;
    
    // Taking input from the user
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter elements of array (sorted order): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    // Call the function to find the index
    int index = findInsertIndex(arr, n, key);
    cout << "The index is/should be: " << index << endl;
    
    return 0;
}
