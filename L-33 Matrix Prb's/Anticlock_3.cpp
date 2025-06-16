#include <iostream>
#include <vector>
using namespace std;

// Function to rotate matrix by 90 degrees anticlockwise
void rotate90AntiClockwise(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse the columns
    for (int j = 0; j < n; j++)
    {
        int top = 0, bottom = n - 1;
        while (top < bottom)
        {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }
}

// Function to print the matrix
void printMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate90AntiClockwise(matrix);

    cout << "Matrix Rotated 90 Degrees Anticlockwise:\n";
    printMatrix(matrix);

    return 0;
}