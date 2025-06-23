#include <iostream>
#include <cctype>  // For tolower()
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countVowels(string str, int index)
{
    if (index == str.length())
        return 0;  // Base case

    int count = 0;
    if (isVowel(str[index]))
        count = 1;

    return count + countVowels(str, index + 1);
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = countVowels(input, 0);

    cout << "Total number of vowels: " << vowelCount << endl;

    return 0;
}
