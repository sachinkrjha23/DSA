#include <iostream>
#include <vector>
using namespace std;

void generateParenthesis(int open, int close, int n, string &temp, vector<string> &ans)
{
    if (open == n && close == n)
    {
        ans.push_back(temp);
        return;
    }

    if (open < n)
    {
        temp.push_back('(');
        generateParenthesis(open + 1, close, n, temp, ans);
        temp.pop_back();
    }

    if (close < open)
    {
        temp.push_back(')');
        generateParenthesis(open, close + 1, n, temp, ans);
        temp.pop_back();
    }
}

int main()
{
    int n;
    cout << "Enter number of pairs of parentheses: ";
    cin >> n;

    vector<string> ans;
    string temp;

    generateParenthesis(0, 0, n, temp, ans);

    cout << "\nAll Valid Parentheses Combinations:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
