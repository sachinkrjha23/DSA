#include <iostream>
using namespace std;

// METHOD - 1
/*  void print(int start, int end) {
    if (start > end)
        return;
    
    cout << start << " ";
    print(start + 2, end);
}

int main() {
    int n;
    cout << "Enter start (n): ";
    cin >> n;

    int m;
    cout << "Enter end (m): ";
    cin >> m;

    if(n%2==1)
    n++;
    print(n, m);

    return 0;
}   */
  

// METJHOD - 2
/*  void print(int n)
{
    if (n == 0)
        return;
    print(n - 2);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(n%2==1){
        n--;
    }

    print(n);
}   */