#include <iostream>
using namespace std;

int main()
{
    string s = "naman";

    // Palindrome
    int start = 0, end = s.size()-1;
    while (start<end)
    {
        if(s[start]!=s[end])
        {
            cout<<"Not a Palindrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"It's Palindrome";
}