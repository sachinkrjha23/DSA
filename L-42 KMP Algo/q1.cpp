#include <iostream>
#include <vector>
using namespace std;

// Function to compute size of longest proper prefix which is also suffix
int longestPrefixSuffix(string s)
{

    // Initialize LPS array of size n with all 0s
    vector<int> lps(s.size(), 0); 
    
    int pre = 0, suf = 1; 

    // Loop through the string starting from second character
    while (suf < s.size())
    {

        // If characters at prefix and suffix positions match
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1; // store length of matched prefix 
            pre++;              // move prefix pointer forward
            suf++;              // move to next character
        }

        else
        {
            // If no match and pre is at start, then no proper prefix-suffix found
            if (pre == 0)
            {
                lps[suf] = 0; // set current position to 0
                suf++;        // move forward
            }
            else
            {
                // Try the previous best prefix length
                pre = lps[pre - 1];
            }
        }
    }

    // Final LPS value is the last entry in lps[]
    return lps[s.size() - 1];
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    // Call the function to compute longest proper prefix which is also suffix
    int result = longestPrefixSuffix(str);

    cout << "Length of longest proper prefix which is also suffix: " << result << endl;

    return 0;
}