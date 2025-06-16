#include <iostream>
#include <vector>
#include <algorithm> // Include this for reverse()
using namespace std;

// Function to rotate matrix by 90 degrees clockwise
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end()); // Now works fine
    }

    // Manually
    /* for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    } */
}

// Function to print the matrix
void printMatrix(vector<vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {  
        for (int j = 0; j < matrix[i].size(); j++) {  
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate(matrix);

    cout << "Rotated Matrix:\n";
    printMatrix(matrix);

    return 0;
}
