/*
#include <iostream>
using namespace std;

// Only small alphabets

int longestPalindrome(string s)
{
    int freq[26] = {0}; // Array to store frequency of only lowercase letters

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++; // Convert character to index (0-25) and count
    }

    int length = 0;
    bool hasOdd = false;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 0)
        {
            length += freq[i]; // Add even counts completely
        }
        else
        {
            length += freq[i] - 1; // Add even part of an odd count
            hasOdd = true;         // Track that there's at least one odd character
        }
    }

    if (hasOdd)
    {
        length++; // Allow one odd character in the middle
    }

    return length;
}

int main()
{
    string s = "abccccdd";
    int result = longestPalindrome(s);
    cout << result << endl;
}*/

#include <iostream>
using namespace std;

// Both upper and lower characters

int longestPalindrome(string s)
{
    int lower[26] = {0}; // For 'a' to 'z'
    int upper[26] = {0}; // For 'A' to 'Z'

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower[s[i] - 'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            upper[s[i] - 'A']++;
    }

    int length = 0;
    bool hasOdd = false;

    for (int i = 0; i < 26; i++)
    {
        if (lower[i] % 2 == 0)
            length += lower[i];
        else
        {
            length += lower[i] - 1;
            hasOdd = true;
        }

        if (upper[i] % 2 == 0)
            length += upper[i];
        else
        {
            length += upper[i] - 1;
            hasOdd = true;
        }
    }

    if (hasOdd)
        length++; // Allow one odd character in the middle

    return length;
}

int main()
{
    string s = "MADAMmmdam";
    int result = longestPalindrome(s);
    cout << result << endl; 
}