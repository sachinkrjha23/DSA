#include <iostream>
#include <vector>
using namespace std;

void subseq(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // Exclude current element
    subseq(arr, index + 1, n, ans, temp);

    // Include current element
    temp.push_back(arr[index]);
    subseq(arr, index + 1, n, ans, temp);
    temp.pop_back();
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> ans;
    vector<int> temp;
    subseq(arr, 0, n, ans, temp);

    cout << "\nAll Subsequences are:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
