#include<iostream>
using namespace std;


int main(){

    int a = 12;
    int *ptr = &a;  
    cout << ptr << endl;  // Prnts address of a
    cout << *ptr << endl;  // Prints value stored in address

    int b = 10;
    ptr = &b;  
    cout << ptr << endl;
    cout << *ptr << endl;

}