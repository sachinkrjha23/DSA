#include <iostream>
using namespace std;

string intToRoman(int num)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = ""; // Stores the final Roman numeral string
    int index = 0;      
    
    while (num > 0)
    {
        while (num >= values[index])
        {
            result += symbols[index];
            num -= values[index]; 
        }
        index++; 
    }

    return result;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Roman numeral: " << intToRoman(num) << endl;
    return 0;
}
