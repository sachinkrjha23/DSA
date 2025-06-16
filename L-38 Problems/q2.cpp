#include <iostream>
using namespace std;

string sortSentence(string s)
{
    string words[10]; // Array to store words at correct positions
    string word = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            int pos = word[word.size() - 1] - '0';        // Get position from last character
            words[pos] = word.substr(0, word.size() - 1); // Store word without the position number
            word = "";
        }
        else
        {
            word += s[i]; // Build the word character by character
        }
    }

    int pos = word[word.size() - 1] - '0';
    words[pos] = word.substr(0, word.size() - 1); // Store the last word

    string result = words[1]; // Start with the first word
    for (int i = 2; i < 10; i++)
    {
        if (words[i] != "")
        { // If a word exists at this position, add it
            result += " " + words[i];
        }
    }

    return result;
}

int main()
{
    string s = "is2 sentence4 This1 a3";
    cout << sortSentence(s) << endl; // Output: "This is a sentence"
    return 0;
}
