#include <iostream>
using namespace std;

// Function to convert an integer to a Roman numeral
string intToRoman(int num)
{
    // Define values and corresponding Roman numeral symbols
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = ""; // Stores the final Roman numeral string
    int index = 0;      // Index for iterating through values

    // Iterate until the number becomes zero
    while (num > 0)
    {
        // Append the corresponding symbol while num is greater or equal to value
        while (num >= values[index])
        {
            result += symbols[index];
            num -= values[index]; // Reduce the number by the value
        }
        index++; // Move to the next Roman numeral value
    }

    return result;
}

// Driver function to test the code
int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Roman numeral: " << intToRoman(num) << endl;
    return 0;
}
