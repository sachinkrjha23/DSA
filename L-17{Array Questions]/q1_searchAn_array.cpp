#include <iostream>
using namespace std;

// Function to search the element in the array
int findElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;  // Return the index if element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int size, element;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare the array
    int arr[size];

    // Input the elements of the array
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> element;

    // Call the function to find the element
    int position = findElement(arr, size, element);

    // Check if the element is found
    if (position != -1) {
        cout << "Element found at position: " << position << endl;
    } 
    else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}