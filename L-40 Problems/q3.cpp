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

/* Explainatio:

Initialization:
result = "1" (factorial starts as 1)

Outer loop (i goes 2 to 5):
i = 2
temp = ""

carry = 0

Inner loop over digits of result ("1"):

j = 0 (last digit in "1")

Calculate product = (1) * 2 + 0 = 2

Append '2' to temp → temp = "2"

Update carry = 0 (2/10 = 0)

Inner loop ends (only 1 digit).

Carry loop:

carry = 0, so skip.

Reverse temp:

temp = "2" (no change after reverse)

Update result:

result = "2"

i = 3
temp = ""

carry = 0

Inner loop over result = "2":

j = 0

product = 2 * 3 + 0 = 6

Append '6' → temp = "6"

carry = 0

Carry loop:

carry = 0, skip

Reverse temp:

temp = "6"

Update result:

result = "6"

i = 4
temp = ""

carry = 0

Inner loop over result = "6":

j = 0

product = 6 * 4 + 0 = 24

Append '4' (24 % 10) → temp = "4"

carry = 2 (24 / 10)

Carry loop:

carry = 2

Append '2' → temp = "42"

carry = 0

Reverse temp:

Before reverse: "42"

After reverse: "24"

Update result:

result = "24"

i = 5
temp = ""

carry = 0

Inner loop over result = "24":

j = 1 (rightmost digit '4')

product = 4 * 5 + 0 = 20

Append '0' → temp = "0"

carry = 2

j = 0 (digit '2')

product = 2 * 5 + 2 = 12

Append '2' → temp = "02"

carry = 1

Carry loop:

carry = 1

Append '1' → temp = "021"

carry = 0

Reverse temp:

Before reverse: "021"

After reverse: "120"

Update result:

result = "120"*/