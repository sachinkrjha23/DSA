#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end)
{
    if (start >= end)
        return; // Base case: middle reached

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1); // Move inward
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseString(input, 0, input.length() - 1); // Start from both ends

    cout << "Reversed string: " << input << endl;

    return 0;
}
