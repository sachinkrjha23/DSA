#include <iostream>
using namespace std;

int SmallestDistinctWindow(string s)
{
    int count[256] = {0};      
    int diff = 0;              
    int first = 0, second = 0; 
    int len = s.size();  

    // Step 1: Count total distinct characters
    for (int i = 0; i < s.size(); i++)
    {
        if (count[s[i]] == 0)
        {
            diff++;
            count[s[i]] = 1;
        }
    }

    // Reset count for sliding window use
    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    int matched = 0; 

    while (second < s.size())
    {
        count[s[second]]++;

        if (count[s[second]] == 1)
        {
            matched++;
        }

        while (matched == diff)
        {
            int window_len = second - first + 1;
            if (window_len < len)
            {
                len = window_len;
            }

            count[s[first]]--;
            if (count[s[first]] == 0)
            {
                matched--; // Lost one distinct char from window
            }
            first++;
        }

        second++;
    }

    // If len was not updated, means no window found (string empty or so)
    if (len > s.size())
        return 0;
    return len;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int result = SmallestDistinctWindow(s);
    cout << "Smallest Distinct Window Length: " << result << endl;

    return 0;
}
