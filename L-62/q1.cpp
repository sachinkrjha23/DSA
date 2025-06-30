#include <iostream>
#include <vector>
using namespace std;

void subsetSum(int arr[], int index, int n, int sum, vector<int> &subset)
{
    if (index == n)
    {
        cout << "{ ";
        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i] << " ";
        }
        cout << "} = " << sum << endl;
        return;
    }

    // Exclude current element
    subsetSum(arr, index + 1, n, sum, subset);

    // Include current element
    subset.push_back(arr[index]);
    subsetSum(arr, index + 1, n, sum + arr[index], subset);
    subset.pop_back(); // backtrack
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> subset;
    cout << "\nSubsets with their sums:\n";
    subsetSum(arr, 0, n, 0, subset);

    return 0;
}
