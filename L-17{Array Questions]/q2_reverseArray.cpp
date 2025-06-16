#include<iostream>
using namespace std;

int main() {
    int size;

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

    // Reverse the array using two pointers
    int i = 0, j = size - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
