#include <iostream>
using namespace std;

int main()
{
    char name, name1;

    for (name = 'a'; name <= 'z'; name++)
    {
        cout << name << " ";
    }
    cout << endl;
    for (name1 = 'A'; name1 <= 'Z'; name1++)
        cout << name1 << " ";
}