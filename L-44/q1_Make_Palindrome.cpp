#include <iostream>
#include <vector>
using namespace std;

// Manual reverse function
void manualReverse(string &str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int minCharToMakePalindrome(string str) {
    string rev = str;
    manualReverse(rev); 

    int size = str.size();
    str+= '#';
    str+= rev;

    int n = str.size();
    vector<int> lps(n, 0); 

    int pre = 0, suf = 1; 

    while (suf < str.size())
    {

        if (str[pre] == str[suf])
        {
            lps[suf] = pre + 1; 
            pre++;             
            suf++;              
        }

        else
        {
            if (pre == 0)
            {
                 // Lps[suf] = 0 (not written coz lps is already initialized by 0)    
                suf++;     
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }

    return size - lps[n - 1];  // Original array size in lps of new array
}


int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int result = minCharToMakePalindrome(str);
    cout << "Minimum characters to be added: " << result << endl;
    return 0;
}
