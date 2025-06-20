#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    // Input dimensions
    cout << "Enter size of X (depth): ";
    cin >> x;
    cout << "Enter size of Y (rows): ";
    cin >> y;
    cout << "Enter size of Z (columns): ";
    cin >> z;

    // Allocate 3D array dynamically
    int ***ptr = new int **[x]; // array of int** (depth)
    for (int i = 0; i < x; ++i)
    {
        ptr[i] = new int *[y]; // for each depth slice, allocate rows
        for (int j = 0; j < y; ++j)
        {
            ptr[i][j] = new int[z]; // for each row, allocate columns
        }
    }

    // Input elements
    cout << "\nEnter elements of 3D array:" << endl;
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            for (int k = 0; k < z; ++k)
            {
                cout << "Element at [" << i << "][" << j << "][" << k << "]: ";
                cin >> ptr[i][j][k];
            }
        }
    }

    // Display 3D array
    cout << "\n3D Array:" << endl;
    for (int i = 0; i < x; ++i)
    {
        cout << "Depth slice " << i << ":" << endl;
        for (int j = 0; j < y; ++j)
        {
            for (int k = 0; k < z; ++k)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            delete[] ptr[i][j]; // delete each row
        }
        delete[] ptr[i]; // delete each depth slice (set of rows)
    }
    delete[] ptr; // delete top-level pointer

    return 0;
}
