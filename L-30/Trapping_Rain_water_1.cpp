#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int> &height)
{
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int totalWater = 0;

    while (left < right)
    {
        if (height[left] < height[right])
        {
            if (height[left] >= leftMax)
            {
                leftMax = height[left]; // Update left max
            }
            else
            {
                totalWater += leftMax - height[left]; // Water trapped
            }
            left++; // Move left pointer
        }
        else
        {
            if (height[right] >= rightMax)
            {
                rightMax = height[right]; // Update right max
            }
            else
            {
                totalWater += rightMax - height[right]; // Water trapped
            }
            right--; // Move right pointer
        }
    }

    return totalWater;
}

int main()
{
    vector<int> height = {5, 1, 4, 2, 5, 7, 3, 1, 3, 7, 4, 6};

    int result = trap(height);
    cout << "Trapped Rain Water: " << result << endl;

    return 0;
}