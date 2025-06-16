#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Given size
    /*vector<vector<int> >matrix(3,vector<int>(4,1));

    cout<<"Rows = "<<matrix.size();
    cout<<endl;
    cout<<"Columns = "<<matrix[0].size();*/

    // User Input
    int n, m;
    cout << "Enter no of rows : ";
    cin >> n;
    cout << "Enter no of columns : ";
    cin>> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter matrix elements: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    cout << "Matrix: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}