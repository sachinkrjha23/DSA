#include <iostream>
using namespace std;

// Check Pangram

bool checkIfPangram(string sentence)
{
    int count[26] = {0};

    for (int i = 0; i < sentence.length(); i++)
    {
        char ch = sentence[i];
        count[ch - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    bool result = checkIfPangram(sentence);

    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
