#include <iostream>
using namespace std;

void diagonalSum(int matrix[][3], int row, int col)
{
    int first = 0, second = 0;
    // First Diagonal
    int i = 0;

    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }

    // Second Diagonal
    i = 0;
    int j = col - 1;

    while (j >= 0)
    {
        second += matrix[i][j];
        i++, j--;
    }
    cout << first << " " << second << " ";
}

int main()
{

    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    diagonalSum(matrix, 3, 3);
}