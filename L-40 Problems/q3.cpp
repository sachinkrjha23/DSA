#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Single function to compute factorial using strings
string factorial(int n)
{
    string result = "1"; // Start with 1 as a string

    for (int i = 2; i <= n; ++i)
    {
        string temp = "";
        int carry = 0;

        // Multiply current result with i (digit by digit)
        for (int j = result.size() - 1; j >= 0; --j)
        {
            int product = (result[j] - '0') * i + carry;
            temp += (product % 10) + '0'; // Store last digit
            carry = product / 10;         // Keep the carry
        }

        // Add remaining carry
        while (carry)
        {
            temp += (carry % 10) + '0';
            carry /= 10;
        }

        reverse(temp.begin(), temp.end()); // Reverse to correct order
        result = temp;                     // Update result
    }

    return result;
}

// Main function to test the code
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is:\n"
         << factorial(num) << endl;
    return 0;
}
