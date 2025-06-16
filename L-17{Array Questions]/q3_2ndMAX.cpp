// Geeks for Geeks

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5] = {21, 36, 12, 7, 68};
    
    // Initialize first and second largest with very small values

    int first = INT_MIN, second = INT_MIN;

    // Loop through the array to find the largest and second largest

    for(int i = 0; i < 5; i++) {

        if(arr[i] > first) {
            second = first;  // Update second largest before updating first largest
            first = arr[i];  // Update first largest
        } 

        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];  // Update second largest if it's smaller than first but larger than second
        }
    }

    // If second is still INT_MIN, it means there was no second largest element

    if(second == INT_MIN) {
        cout << "There is no second largest element." << endl;

    } 
    else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}