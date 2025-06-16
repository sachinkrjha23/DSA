#include <iostream>
using namespace std;

int main()
{

    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[4][3] = {-1, 2, -3, 4, -5, 6, 7, 8, -4, 1, 1, 10};
    int ans[4][3], ans1[4][3], ans2[4][3], ans3[4][3], ans4[4][3];

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            ans[row][col] = arr1[row][col] + arr2[row][col];
            ans1[row][col] = arr1[row][col] - arr2[row][col];
            ans2[row][col] = arr1[row][col] * arr2[row][col];

            // Avoid division/modulo by zero
            if (arr2[row][col] != 0)
            {
                ans3[row][col] = arr1[row][col] / arr2[row][col];
                ans4[row][col] = arr1[row][col] % arr2[row][col];
            }
            else
            {
                ans3[row][col] = 0; // Assign a placeholder value
                ans4[row][col] = 0;
            }
        }
    }
    // Print results in a structured format
    cout << "Addition:\n";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << ans[row][col] << " ";
        cout << endl;
    }

    cout << "\nSubtraction:\n";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << ans1[row][col] << " ";
        cout << endl;
    }

    cout << "\nMultiplication:\n";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << ans2[row][col] << " ";
        cout << endl;
    }

    cout << "\nDivision:\n";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << ans3[row][col] << " ";
        cout << endl;
    }

    cout << "\nModulus:\n";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << ans4[row][col] << " ";
        cout << endl;
    }
}