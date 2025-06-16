#include<iostream>
using namespace std;

int main(){
    int a = 123;
    cout<<a<<endl;

    char b = 'S'; 
    cout<<b<<endl;

    bool bl = true;
    cout<< bl <<endl;

    float f = 1.2;
    cout<< f <<endl;

    double d = 1.2345;
    cout<< d <<endl;

    int size_a = sizeof(a);
    cout<<"Size of 'a' is: "<< size_a <<endl;

    int size_b = sizeof(b);
    cout<<"Size of 'b' is: "<< size_b <<endl;

    int size_bl = sizeof(bl);
    cout<<"Size of 'bl' is: "<< size_bl <<endl;

    int size_f = sizeof(f);
    cout<<"Size of 'f' is: "<< size_f <<endl;

    int size_d = sizeof(d);
    cout<<"Size of 'd' is: "<< size_d <<endl;
}