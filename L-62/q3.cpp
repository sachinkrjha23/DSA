#include <iostream>
#include<vector>     /* For Method - 2 */ 
using namespace std;

// Printing no of subsets with Perfect Sum


// int perfectSum(int arr[], int index, int n, int sum)
// {
//     if (index == n)
//     {
//         if (sum == 0)
//             return 1; // Found valid subset
//         else
//             return 0; // Not a valid subset
//     }

//     // Exclude current element
//     int exclude = perfectSum(arr, index + 1, n, sum);

//     // Include current element (only if <= sum)
//     int include = 0;
//     if (arr[index] <= sum)
//     {
//         include = perfectSum(arr, index + 1, n, sum - arr[index]);
//     }

//     return exclude + include;
// }

// int main()
// {
//     int n, k;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Enter target sum K: ";
//     cin >> k;

//     int totalWays = perfectSum(arr, 0, n, k);
//     cout << "Total subsets with sum " << k << " = " << totalWays << endl;

//     return 0;
// }

// Printing with subsets


int perfectSum(int arr[], int index, int n, int sum, vector<int> &temp)
{
    if (index == n)
    {
        if (sum == 0)
        {
            // Print the valid subset
            cout << "{ ";
            for (int i = 0; i < temp.size(); i++)
                cout << temp[i] << " ";
            cout << "}" << endl;
            return 1;  // One valid subset found
        }
        else
        {
            return 0;
        }
    }

    // Exclude current element
    int exclude = perfectSum(arr, index + 1, n, sum, temp);

    // Include current element (only if <= sum)
    int include = 0;
    if (arr[index] <= sum)
    {
        temp.push_back(arr[index]);
        include = perfectSum(arr, index + 1, n, sum - arr[index], temp);
        temp.pop_back();  // Backtrack
    }

    return exclude + include;
}

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum K: ";
    cin >> k;

    vector<int>temp;
    cout << "\nSubsets with sum " << k << " are:\n";
    int totalWays = perfectSum(arr, 0, n, k, temp);

    cout << "\nTotal subsets with sum " << k << " = " << totalWays << endl;

    return 0;
}