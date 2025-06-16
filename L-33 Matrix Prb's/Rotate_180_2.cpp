#include <iostream>
#include <vector>
#include <algorithm> // For reverse()
using namespace std;

// Function to rotate the matrix by 180 degrees
void rotate180(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Reverse col wise (upside down)
    // reverse(matrix.begin(), matrix.end());

    // Manually 
    for (int j = 0; j < n; j++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }
    
    // Reverse each row (left to right)
    // for (int i = 0; i < n; i++) {
    //     reverse(matrix[i].begin(), matrix[i].end());
    // }

    // Manually
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

// Function to print the matrix
void printMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    for (int i = 0; i < n; i++) {  // Loop through rows
        for (int j = 0; j < n; j++) {  // Loop through columns
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate180(matrix);

    cout << "\nRotated Matrix by 180 degrees:\n";
    printMatrix(matrix);

    return 0;
}