#include <iostream>
using namespace std;

// Function to find the minimum weight capacity to ship all packages within D days
int shipWithinDays(int weights[], int n, int D)
{
    int start = 0, end = 0, mid, ans;

    // Calculate start (maximum weight) and end (total weight) without inbuilt functions
    for (int i = 0; i < n; i++)
    {
        if (weights[i] > start)
        {
            start = weights[i]; // Find the maximum weight manually
        }
        end += weights[i]; // Calculate the total weight of all packages
    }
    // By wish
    cout << "Start: " << start << endl
         << "End: " << end << endl; // By wish

    // Binary search for the optimal solution
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int days = 1;
        int currentWeight = 0;

        for (int i = 0; i < n; i++)
        {
            if (currentWeight + weights[i] > mid)
            {
                days++;
                currentWeight = weights[i];
            }
            else
            {
                currentWeight += weights[i];
            }
        }

        if (days <= D)
        {
            ans = mid;     // Update answer to the current mid
            end = mid - 1; // Try for a smaller maximum capacity
        }
        else
        {
            start = mid + 1; // Increase the maximum capacity
        }
    }

    return ans;
}

int main()
{
    int weights[] = {3, 2, 2, 4, 1, 4}; // Weights of packages
    int n = 6;                          // Number of packages
    int D = 3;                          // Number of days

    int result = shipWithinDays(weights, n, D);
    cout << "The minimum weight capacity to ship all packages within " << D << " days is: " << result << endl;

    return 0;
}
