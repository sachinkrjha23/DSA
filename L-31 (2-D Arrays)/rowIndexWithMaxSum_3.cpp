#include <iostream>
#include<climits>
using namespace std;

void printRowMax(int arr[][3], int row, int col)
{
    int index =-1, sum = INT_MIN;
    for(int i=0; i<row; i++)
    {
        int total = 0;
        for(int j=0; j<col; j++)
        {
            total+= arr[i][j];
        }
        if(total>sum)
        {
            sum=total;
            index = i;
        }
    }
    cout<<index<<" ";
}

int main()
{

    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[4][3] = {-1, 2, -3, 4, -5, 6, 7, 8, -4, 1, 1, 10};
    int ans[4][3];

    printRowMax(arr2,4,3);
}