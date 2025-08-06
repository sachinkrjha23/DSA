#include <iostream>
#include <vector>
using namespace std;

void solve(int n, string &temp, int one, int zero, vector<string> &ans)
{
    if (temp.length() == n)
    {
        if (one >= zero)
        {
            ans.push_back(temp);
        }
        return;
    }

    // Always add '1'
    temp.push_back('1');
    solve(n, temp, one + 1, zero, ans);
    temp.pop_back(); // backtrack

    // Add '0' only if ones > zeros (to keep every prefix valid)
    if (one > zero)
    {
        temp.push_back('0');
        solve(n, temp, one, zero + 1, ans);
        temp.pop_back(); // backtrack
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<string> ans;
    string temp = "";
    int one = 0, zero = 0;

    solve(n, temp, one, zero, ans);

    cout << "\nValid N-bit binary numbers (prefix 1s ≥ 0s):\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
