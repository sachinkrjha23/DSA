#include <iostream>
#include <cmath> // For pow()
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to helper
    towerOfHanoi(n - 1, source, destination, helper);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move n-1 disks from helper to destination
    towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    if (n > 0)
    {
        int totalMoves = pow(2, n) - 1;
        cout << "\nTotal number of steps: " << totalMoves << "\n"
             << endl;
        towerOfHanoi(n, 'A', 'B', 'C');
    }
    else
    {
        cout << "Number of disks must be greater than 0." << endl;
    }

    return 0;
}


// towerOfHanoi(3, A, B, C)
// ├── towerOfHanoi(2, A, C, B)
// │   ├── towerOfHanoi(1, A, B, C)      --> Move disk 1 from A to C
// │   ├── Move disk 2 from A to B       --> Direct move
// │   └── towerOfHanoi(1, C, A, B)      --> Move disk 1 from C to B
// ├── Move disk 3 from A to C           --> Direct move
// └── towerOfHanoi(2, B, A, C)
//     ├── towerOfHanoi(1, B, C, A)      --> Move disk 1 from B to A
//     ├── Move disk 2 from B to C       --> Direct move
//     └── towerOfHanoi(1, A, B, C)      --> Move disk 1 from A to C
