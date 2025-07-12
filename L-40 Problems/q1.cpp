#include <iostream>
using namespace std;

// Function to return the integer value of a Roman numeral character
int num(char ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;
    return 0; // Default case (not needed for valid input)
}

// Function to convert a Roman numeral string to an integer
int romanToInt(string s)
{
    int sum = 0;
    int index = 0;

    while (index < s.size() - 1)
    {
        // If current numeral is smaller than the next, subtract it
        if (num(s[index]) < num(s[index + 1]))
        {
            sum -= num(s[index]);
        }
        // Otherwise, add it
        else
        {
            sum += num(s[index]);
        }
        index++;
    }

    // Add the last character's value
    sum += num(s[s.size() - 1]);

    return sum;
}

int main()
{
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    cout << "Integer value: " << romanToInt(s) << endl;
    return 0;
}