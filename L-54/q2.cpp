#include <iostream>
using namespace std;

int countWays(int n)
{
    if (n == 0)
        return 1; // 1 way: stay at ground
    if (n < 0)
        return 0; // No way for negative stairs

    return countWays(n - 1) + countWays(n - 2);
}

int main()
{
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;

    int ways = countWays(n);
    cout << "Number of ways to reach " << n << "th stair is " << ways << ".";

    return 0;
}
