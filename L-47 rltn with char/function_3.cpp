// #include <iostream>
// using namespace std;

// // Pass by Pointer
// void swapping(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int main()
// {
//     int first = 10, second = 20;
//     cout << "first: " << first << " " << "second: " << second << endl;
//     swapping(&first, &second);
//     cout << "first: " << first << " " << "second: " << second;
// }

// #include <iostream>
// using namespace std;

// // Pass by Value
// void swapping(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "a: " << a << " b: " << b << endl;
// }

// int main()
// {
//     int first = 10, second = 20;
//     cout << "first: " << first << " second: " << second << endl;
//     swapping(first, second);
//     cout << "first: " << first << " second: " << second << endl;
// }

#include <iostream>
using namespace std;

// Pass by Reference
void swapping(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int first = 10, second = 20;
    cout << "first: " << first << " second: " << second << endl;
    swapping(first, second);
    cout << "first: " << first << " second: " << second << endl;
}
