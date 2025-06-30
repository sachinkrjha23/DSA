#include <iostream>
#include <vector>
using namespace std;

// Method - 1
// void subsetSum(int arr[], int index, int n, int sum, int target, vector<int> &temp, vector<vector<int>> &ans)
// {
//     if (index == n)
//     {
//         if (sum == target)
//         {
//             ans.push_back(temp);
//         }
//         return;
//     }

//     // Exclude current element
//     subsetSum(arr, index + 1, n, sum, target, temp, ans);

//     // Include current element
//     temp.push_back(arr[index]);
//     subsetSum(arr, index + 1, n, sum + arr[index], target, temp, ans);
//     temp.pop_back();
// }

// int main()
// {
//     int n, k;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Enter target sum K: ";
//     cin >> k;

//     vector<vector<int>> ans;
//     vector<int> temp;

//     subsetSum(arr, 0, n, 0, k, temp, ans);

//     cout << "\nSubsets with sum " << k << ":\n";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << "{ ";
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << "}" << endl;
//     }

//     return 0;
// }

// Method - 2

bool subsetSum(int arr[], int index, int n, int target)
{
    if (target == 0)
        return true;  // Found valid subset

    if (index == n || target < 0)
        return false; // Reached end without valid subset

    // Either exclude OR include current element
    return subsetSum(arr, index + 1, n, target) || 
           subsetSum(arr, index + 1, n, target - arr[index]);
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

    if (subsetSum(arr, 0, n, k))
        cout << "Subset with sum " << k << " exists!" << endl;
    else
        cout << "No subset with sum " << k << " found." << endl;

    return 0;
}

