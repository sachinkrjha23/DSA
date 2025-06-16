#include <iostream>
using namespace std;

int main() {
    int size;

    // Input the number of elements in the array
    cout << "Enter the size of array: ";
    cin >> size;

    // Declare the array
    int arr[size];

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotate the array by one position to the right
    if (size > 1) { // Only rotate if there are at least two elements
        int lastElement = arr[size-1];  // Store the last element
        
        // Shift elements to the right by one position
        for (int i = size - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }

        // Place the last element at the first position
        arr[0] = lastElement;
    }

    // Print the array after rotating
    cout << "Array after rotating by one: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}