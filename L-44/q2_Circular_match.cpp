#include <iostream>
#include <vector>
using namespace std;

vector<int> computeLps(string substr)
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
int KMP_MATCH(string str, string substr)
{

    vector<int> lps = computeLps(substr);

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
        return 1;
    }

    return 0;
}

int repeatedStringMatch(string a, string b)
{
    if (a == b)
    {
        return 1;
    }
    int repeat = 1;
    string temp = a;
    while (temp.size() < b.size())
    {
        temp += a;
        repeat++;
    }
    // KMP Pattern search
    if (KMP_MATCH(temp, b) == 1)
    {
        return repeat;
    }
    // Temp+a, KMP search
    if (KMP_MATCH(temp + a, b) == 1)
    {
        return repeat + 1;
    }
    return -1;
}
int main()
{
    string a, b;

    cout << "Enter a: ";
    getline(cin, a);

    cout << "Enter b: ";
    getline(cin, b);

    cout << repeatedStringMatch(a, b);

    return 0;
}