#include <iostream>
using namespace std;

// Function to sort the string
void sortString(string &s)
{
    int freq[26] = {0}; // Array to count frequency of each character

    // Count occurrences of each character
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    // Reconstruct the sorted string
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] > 0)
        {
            s[index] = 'a' + i;
            index++;
            freq[i]--;
        }
    }
    cout << s << endl;
}

int main()
{
    string s = "dbcae"; // Example input
    sortString(s);

    // cout << s << endl; // Output the sorted string

    return 0;
}
