#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int count[256] = {0}; // Array to track character occurrences (0 = not seen, 1 = seen)
    int first = 0, second = 0, length = 0;

    while (second < s.size())
    {
        while (count[s[second]])
        {                        // If character is already in substring
            count[s[first]] = 0; // Remove leftmost character
            first++;
        }
        count[s[second]] = 1; // Mark current character as seen
        length = max(length, second - first + 1);
        second++;
    }

    return length;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    int result = lengthOfLongestSubstring(s);
    cout << "Longest substring length: " << result << endl;

    return 0;
}
