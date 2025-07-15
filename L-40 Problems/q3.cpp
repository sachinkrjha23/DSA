#include <iostream>
#include <vector>

using namespace std;

vector<int> fact(int n)
{
    vector<int> ans(1, 1); 

    while (n > 1)
    {
        int carry = 0, result, size = ans.size();
        for (int i = 0; i < size; i++)
        {
            result = ans[i] * n + carry;
            carry = result / 10;
            ans[i] = result % 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }

        n--;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result = fact(n);

    cout << n << "! = ";
    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];
    cout << endl;

    return 0;
}
