#include <iostream>
#include <string>
using namespace std;

string sortVowels(string s)
{
    int lower[26] = {0}, upper[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        while (upper[i]--)
        {
            while (s[index] != '#')
                index++;
            s[index++] = 'A' + i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        while (lower[i]--)
        {
            while (s[index] != '#')
                index++;
            s[index++] = 'a' + i;
        }
    }

    return s;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s); 

    cout << "Sorted Vowels String: " << sortVowels(s) << endl;
    return 0;
}
