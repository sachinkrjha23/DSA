#include <iostream>
#include <vector>
using namespace std;

void subseq(string &str, int index, int n, vector<string> &ans, string &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // Exclude current character
    subseq(str, index + 1, n, ans, temp);

    // Include current character
    temp.push_back(str[index]);
    subseq(str, index + 1, n, ans, temp);

    // Backtrack
    temp.pop_back();
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    vector<string> ans;
    string temp;

    subseq(str, 0, n, ans, temp);

    cout << "\nAll Subsequences are:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "\"" << ans[i] << "\"" << endl;
    }

    return 0;
}
