#include <iostream>
#include <algorithm> 
using namespace std;

string addStrings(string num1, string num2)
{
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    string result = "";

    // Process both numbers from right to left
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int digit1 = 0, digit2 = 0;

        if (i >= 0)
        {
            digit1 = num1[i] - '0'; // Convert char to int
            i--;                    // Move left
        }

        if (j >= 0)
        {
            digit2 = num2[j] - '0'; // Convert char to int
            j--;                    // Move left
        }

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;           // Extract carry
        result += (sum % 10) + '0'; // Append last digit to result
    }

    reverse(result.begin(), result.end()); // Reverse to get final sum
    return result;
}

int main()
{
    string num1,num2;
    cout<<"Enter num1 and num2: ";
    cin>> num1 >> num2;

    cout << addStrings(num1, num2) << endl;
}