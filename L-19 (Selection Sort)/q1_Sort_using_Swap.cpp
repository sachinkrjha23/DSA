#include<iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Main code
    for (int i=0; i<n-1; i++){

        int index = i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[index])
            index=j;
        }

        swap(arr[i],arr[index]);

    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}