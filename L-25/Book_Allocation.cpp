#include <iostream>
using namespace std;

int distribution(int arr[], int n)
{
    int start = 0, end = 0, mid, ans;

    // Calculate start and end without using built-in functions
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > start)
        {
            start = arr[i]; // Find the maximum element manually
        }
        end += arr[i]; // Calculate the sum of all elements
    }
    cout << "Start: " << start << endl << "End: " << end << endl; // By wish

    // Binary search for the optimal solution
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int page = 0, count = 1;

        // Allocate books to students
        for (int i = 0; i < n; i++)
        {
            if (page + arr[i] > mid)
            {
                count++;
                page = arr[i];
            }
            else
            {
                page += arr[i];
            }
        }

        // Adjust search range
        if (count <= 2)
        { // Assuming we want to distribute among 2 students
            ans = mid;
            end = mid - 1; // Try for a smaller maximum
        }
        else
        {
            start = mid + 1; // Increase the maximum limit
        }
    }

    return ans;
}

int main()
{
    int arr[4] = {12, 34, 67, 90}; // Pages in books
    int n = 4;                     // Number of books

    int result = distribution(arr, n);
    cout << "The minimum possible maximum pages allocated to a student is: " << result << endl;

    return 0;
}
