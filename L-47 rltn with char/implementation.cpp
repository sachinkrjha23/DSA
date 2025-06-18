#include <iostream>
using namespace std;

int main()
{
    // Print address of 'arr'
    char arr[5] = "1234";
    char *ptr = arr;
    cout << (void *)arr << endl;
    cout << (void *)ptr << endl;

    // Print address of 'name'
    char name = 'a';
    cout << (void*) &name;
}