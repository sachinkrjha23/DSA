// Search in a sorted row-column-wise matrix

#include <iostream>
#include <vector>
using namespace std;

void searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int i = 0;
    int j = cols - 1; // Start from top-right corner

    while (i < rows && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            cout << "Found at (" << i << ", " << j << ")\n";
            return;
        }
        else if (matrix[i][j] < target)
        {
            i++; // Move down
        }
        else
        {
            j--; // Move left
        }
    }

    cout << "Not found\n";
}

int main()
{
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int target = 29;
    searchMatrix(matrix, target);

    return 0;
}
