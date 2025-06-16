#include <iostream>
using namespace std;

void printCol(int arr[][3], int row, int col)
{
    cout << "Col form: ";
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << " ";
    }
}

int main()
{

    // Create an array
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Print all the values in array
    /* cout << "Row form: ";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << arr[row][col] << " ";
    }
    cout << endl;*/

    // Print all value in array col awise, function call
    // printCol(arr, 4, 3);

    // Find an element
    int x = 9;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == x)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}