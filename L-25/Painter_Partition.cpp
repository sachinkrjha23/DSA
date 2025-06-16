#include <iostream>
using namespace std;

// Function to find the minimum time required to paint all boards
int painterPartition(int arr[], int n, int k)
{
    int start = 0, end = 0, mid, ans;

    // Calculate start (maximum element) and end (sum of all elements) without inbuilt functions
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > start)
        {
            start = arr[i]; // Find the maximum element manually
        }
        end += arr[i]; // Calculate the sum of all elements
    }

    // By wish
    cout << "Start:" << start << endl
         << "End:" << end << endl;

    // Binary search for the optimal solution
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int painters = 1;
        int timeSpent = 0;

        for (int i = 0; i < n; i++)
        {
            if (timeSpent + arr[i] > mid)
            {
                painters++;
                timeSpent = arr[i];
            }
            else
            {
                timeSpent += arr[i];
            }
        }

        if (painters <= k)
        {
            ans = mid;     // Update answer to the current mid
            end = mid - 1; // Try for a smaller maximum time
        }
        else
        {
            start = mid + 1; // Increase the maximum time
        }
    }

    return ans;
}

int main()
{
    int arr[] = {5, 10, 30, 20, 15}; // Length of boards
    int n = 5;                       // Number of boards
    int k = 3;                       // Number of painters

    int result = painterPartition(arr, n, k);
    cout << "The minimum time required to paint all boards is: " << result << endl;

    return 0;
}
