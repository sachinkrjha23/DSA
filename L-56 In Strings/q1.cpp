#include <iostream>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
        return true;  // Base case: all characters matched

    if (str[start] != str[end])
        return false;  // Mismatch found

    return isPalindrome(str, start + 1, end - 1);  // Move inward
}

int main()
{
    string input;
    cout << "Enter a string : ";
    cin >> input;

    if (isPalindrome(input, 0, input.length() - 1))
        cout << input << " is a palindrome." << endl;
    else
        cout << input << " is not a palindrome." << endl;

    return 0;
}