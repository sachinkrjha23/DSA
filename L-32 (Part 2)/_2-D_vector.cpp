#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Create 2-D Vector
    vector<vector<int>> matrix(3, vector<int>(4,3));
    cout<<"Enter : ";
    cin>>matrix[2][2];

    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
        cout << matrix[i][j] << " ";

    cout << "\nRows = " << matrix.size();
    cout << "\nColumns = " << matrix[0].size();
}