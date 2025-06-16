#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return arr[start];
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[1000]; // assuming max size won't exceed 1000
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minimum = findMin(arr, size);
    cout << "Minimum element is: " << minimum << "and it's index is: " << arr[minimum] << endl;

    return 0;
}
