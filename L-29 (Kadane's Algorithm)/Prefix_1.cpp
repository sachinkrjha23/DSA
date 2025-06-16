#include <iostream>
#include <vector>
using namespace std;

// Function to check if the array can be divided into two parts with equal sum
bool canBeDividedEqually(const vector<int> &arr)
{
    int totalSum = 0, prefixSum = 0;
    int n = arr.size();

    // Calculate total sum of array
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    // Check for a point where prefix sum equals the remaining sum
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        int remainingSum = totalSum - prefixSum;

        if (prefixSum == remainingSum)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Display result
    if (canBeDividedEqually(v))
    {
        cout << "YES, the array can be divided into two parts with equal sum." << endl;
    }
    else
    {
        cout << "NO, such a division is not possible." << endl;
    }

    return 0;
}
