#include <iostream>
#include <vector>
using namespace std;

int perfectSumWithRepetition(int arr[], int index, int n, int sum, vector<int> &temp)
{
    if (sum == 0)
    {
        cout << "{ ";
        for (int i = 0; i < temp.size(); i++)
            cout << temp[i] << " ";
        cout << "}" << endl;
        return 1; // Valid subset found
    }

    if (index == n || sum < 0)
        return 0;

    int total = 0;

    // Include current element (stay on same index to allow repetition)
    temp.push_back(arr[index]);
    total += perfectSumWithRepetition(arr, index, n, sum - arr[index], temp);
    temp.pop_back();

    // Exclude current element, move to next index
    total += perfectSumWithRepetition(arr, index + 1, n, sum, temp);

    return total;
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

    vector<int> temp;
    cout << "\nSubsets with sum " << k << " are :\n";
    int totalWays = perfectSumWithRepetition(arr, 0, n, k, temp);

    cout << "\nTotal subsets with sum " << k << " = " << totalWays << endl;

    return 0;
}
