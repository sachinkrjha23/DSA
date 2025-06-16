#include <iostream>
using namespace std;

int main()
{
    //  Add [] whenever (.) comes.Eg:- 1.1.1 = 1[.]1[.]1

    string address = "1.1.1.1";
    int index = 0;
    string ans;
    while (index < address.size())
    {
        if (address[index] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += address[index];
        }
        index++;
    }
    cout << ans << endl;
    return 0;
}