// Moore Voting Algorithm

#include <iostream>
#include <vector>
using namespace std;

// O(N) approach

int majorityElement(vector<int> &nums)
{
    int candidate = nums[0], count = 1;

    // Step 1: Find the candidate
    for (int i = 1; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i]; // Reset candidate
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++; // Increase count for same element
        }
        else
        {
            count--; // Decrease count for different element
        }
    }

    // Step 2: Verify if the candidate is actually the majority
    count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    // Step 3: Check if count is more than floor(n/2)
    if (count > nums.size() / 2)
    {
        return candidate;
    }
    else
    {
        return -1; // No majority element
    }
}

int main()
{
    vector<int> nums = {3, 3, 4, 8, 8, 3, 3}; // Example input
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}

// Method - 2 : Sorting

// O(n log n) time (sorting takes longer, but simple to implement).

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2]; // Middle element is the majority
}

int main()
{
    vector<int> nums = {3, 3, 4, 2, 3, 3, 3};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}*/