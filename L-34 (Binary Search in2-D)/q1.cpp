// Search in a sorted 2-D Array using Binary Search

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    const int rows = matrix.size();
    const int cols = matrix[0].size();

    int left = 0;
    int right = rows * cols - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int element = matrix[mid / cols][mid % cols];

        if (element == target)
        {
            return true;
        }
        else if (element < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 20;

    bool found = searchMatrix(matrix, target);

    if (found)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
