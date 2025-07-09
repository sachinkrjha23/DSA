#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permuteUnique(vector<int> &nums, int l, int r)
{
    if (l == r)
    {
        for (int i = 0; i <= r; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = l; i <= r; i++)
    {
        // Skip duplicates
        bool shouldSwap = true;
        for (int j = l; j < i; j++)
        {
            if (nums[j] == nums[i])
            {
                shouldSwap = false;
                break;
            }
        }

        if (shouldSwap)
        {
            swap(nums[l], nums[i]);        // Fix one element
            permuteUnique(nums, l + 1, r); // Recurse for remaining
            swap(nums[l], nums[i]);        // Backtrack
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end()); // Important for correct duplicate handling

    cout << "Unique permutations:\n";
    permuteUnique(nums, 0, n - 1);

    return 0;
}