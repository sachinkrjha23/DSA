#include <iostream>
using namespace std;

int aggressiveCows(int arr[], int n, int cows)
{
    // Step 1: Sort the stall positions using Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int index = i; // Assume the current position has the minimum value
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j; // Update index of the minimum value
            }
        }
        swap(arr[i], arr[index]);
    }

    int start = 1;                 
    int end = arr[n - 1] - arr[0]; 
    int result = 0;                // Store the best answer found

    while (start <= end)
    {
        int mid = start + (end - start) / 2; 

        // Try placing cows with at least 'mid' distance
        int count = 1;             // First cow is placed at the first stall
        int lastPosition = arr[0]; // Track the position of the last placed cow

        for (int i = 1; i < n; i++)
        {
            if (arr[i] - lastPosition >= mid)
            {
                count++;               // Place another cow
                lastPosition = arr[i]; // Update last position
            }
        }

        // If all cows can be placed with at least 'mid' distance
        if (count >= cows)
        {
            result = mid;    // Update result
            start = mid + 1; // Try for a larger distance
        }
        else
        {
            end = mid - 1; // Try for a smaller distance
        }
    }

    return result; // Return the largest minimum distance found
}

int main()
{
    int stalls[] = {10, 1, 2, 7, 5};
    int n = 5;    // Total number of stalls
    int cows = 3; // Number of cows to place

    // Call the function to find the result
    int result = aggressiveCows(stalls, n, cows);

    // Print the final result
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
