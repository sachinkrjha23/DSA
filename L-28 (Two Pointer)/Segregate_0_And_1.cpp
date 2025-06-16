#include <iostream>
using namespace std;

void segregate_0s_1s(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        // Move 'left' forward while it's 0 and less than 'right'
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        // Move 'right' backward while it's 1 and greater than 'left'
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        // Swap misplaced 1 (on left) and 0 (on right)
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    segregate_0s_1s(arr, n);

    cout << "Segregated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
