// #include <iostream>
// #include <vector>
// using namespace std;

// // Complexity : T.C - O(n^2), S.C - O(n)

// int winner(vector<bool>& person, int n, int index, int person_left, int k) {

//     if (person_left == 1) {
//         for (int i = 0; i < n; i++) {
//             if (person[i] == false)
//                 return i;
//         }
//     }

//     // Find k-th person to kill
//     int kill = (k - 1) % person_left;
//     while (kill--) {
//         index = (index + 1) % n;
//         while (person[index] == true) {
//             index = (index + 1) % n;
//         }
//     }

//     // Eliminate the person
//     person[index] = true;

//     // Move index to next alive person
//     while (person[index] == true) {
//         index = (index + 1) % n;
//     }

//     // Recursive call
//     return winner(person, n, index, person_left - 1, k);
// }

// int main() {
//     int n, k;
//     cout << "Enter number of people (n): ";
//     cin >> n;
//     cout << "Enter step count (k): ";
//     cin >> k;

//     vector<bool> person(n, false); 
//     int result = winner(person, n, 0, n, k);

//     cout << "The winner is: " << result << endl;

//     return 0;
// }

// Complexity : T.C - O(n), S.C - O(n)

#include <iostream>
using namespace std;

// Recursive function to find the Josephus position
int josephus(int n, int k)
{
    // Base case: only one person left
    if (n == 1)
        return 0;
    else
        return (josephus(n - 1, k) + k) % n;
}

int main()
{
    int n, k;
    cout << "Enter number of people (n): ";
    cin >> n;
    cout << "Enter step count (k): ";
    cin >> k;

    int result = josephus(n, k);
    cout << "The safe position is: " << result << endl;

    return 0;
}
