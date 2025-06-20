#include <iostream>
using namespace std;

// 2-D array
int main() {
    int rows, cols;

    // Input dimensions
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for 2D array
    int** ptr = new int*[rows]; // array of int pointers

    for (int i = 0; i < rows; ++i) {
        ptr[i] = new int[cols]; // allocate memory for each row
    }

    // Input elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> ptr[i][j];
        }
    }

    // Display the 2D array
    cout << "\n2D Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; ++i) {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}
