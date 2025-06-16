#include <iostream>
using namespace std;

// Function to reverse each row of a 2D array
void reverseEachRow(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int start = 0, end = cols - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

// Function to print the 2D array
void printArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Original Array:\n";
    printArray(arr, 3, 3);

    reverseEachRow(arr, 3, 3);

    cout << "\nReversed Each Row:\n";
    printArray(arr, 3, 3);

    return 0;
}
