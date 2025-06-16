// Index of first occurence of string

#include <iostream>
#include <vector>
using namespace std;

// Build LPS array for substr using your preferred logic
vector<int> computeLPS(string substr)
{
    int m = substr.size();
    vector<int> lps(m, 0);

    int pre = 0, suf = 1;

    while (suf < m)
    {
        if (substr[pre] == substr[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps;
}

// KMP search function using str and substr
int kmpSearch(string str, string substr)
{

    vector<int> lps = computeLPS(substr);

    int n = str.length();
    int m = substr.length();

    if (m == 0)
    {
        return 0;
    }

    int first = 0;  // Index for str
    int second = 0; // Index for substr

    while (first < n && second < m)
    {
        if (str[first] == substr[second])
        {
            first++;
            second++;
        }

        else
        {
            if (second == 0)
            {
                first++;
            }

            else
            {
                second = lps[second - 1];
            }
        }
    }

    if (second == m)
    {
        return first - second;
    }

    return -1;
}

int main()
{
    string str, substr;

    cout << "Enter the main string (str): ";
    getline(cin, str);

    cout << "Enter the substring (substr) to find: ";
    getline(cin, substr);

    int index = kmpSearch(str, substr);

    if (index == -1)
        cout << "Substring not found\n";
    else
        cout << "First occurrence at index: " << index << "\n";

    return 0;
}