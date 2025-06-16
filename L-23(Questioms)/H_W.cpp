// Count occurence of an element in an array

#include <iostream>
using namespace std;

// Binary search to find the first occurrence of the key
int findFirstOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, firstOccurrence = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            firstOccurrence = mid;
            end = mid - 1;  // Continue searching in the left half
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return firstOccurrence;
}

// Binary search to find the last occurrence of the key
int findLastOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, lastOccurrence = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            lastOccurrence = mid;
            start = mid + 1;  // Continue searching in the right half
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return lastOccurrence;
}

// Function to count occurrences of the key
int countOccurrences(int arr[], int n, int key) {
    // Find the first and last occurrences
    int first = findFirstOccurrence(arr, n, key);
    int last = findLastOccurrence(arr, n, key);
    
    // If key is not found, return 0
    if (first == -1 || last == -1) {
        return 0;
    }
    
    // The count is the difference between the last and first occurrences plus 1
    return last - first + 1;
}

int main() {
    int arr[1000];
    int n;
    
    // Taking input from the user
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;
    
    // Count occurrences of the key (4)
    int count = countOccurrences(arr, n, key);
    
    // Output the result
    cout << "The number " << key << " appears " << count << " times in the array." << endl;

    return 0;
}