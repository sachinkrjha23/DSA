#include <iostream>
using namespace std;

void rotateClockwise(string &s)
{
    char c1 = s[s.size() - 1]; // Store last character
    char c2 = s[s.size() - 2]; // Store second-last character
    int index = s.size() - 3;

    while (index >= 0)
    {
        s[index + 2] = s[index]; // Shift characters right
        index--;
    }
    s[0] = c2;
    s[1] = c1;
}

void rotateAnticlockwise(string &s)
{
    char c1 = s[0]; // Store first character
    char c2 = s[1]; // Store second character
    int index = 2;

    while (index < s.size())
    {
        s[index - 2] = s[index]; // Shift characters left
        index++;
    }
    s[s.size() - 2] = c1;
    s[s.size() - 1] = c2;
}

bool isRotated(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return false;
    }

    string clockwise = str1, anticlockwise = str1;

    rotateClockwise(clockwise);
    rotateAnticlockwise(anticlockwise);

    if (clockwise == str2 || anticlockwise == str2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a = "amazon";
    string b = "azonam";

    if (isRotated(a, b))
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}
