#include <iostream>
using namespace std;

void toUppercase(string &str, int index)
{
    if (index == str.length())
        return;  // Base case

    if (str[index] >= 'a' && str[index] <= 'z')
        str[index] = 'A' + (str[index] - 'a');  // Manual conversion

    toUppercase(str, index + 1);
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    toUppercase(input, 0);

    cout << "String after converting to uppercase: " << input << endl;

    return 0;
}
