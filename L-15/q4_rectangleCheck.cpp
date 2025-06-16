#include <iostream>
using namespace std;

bool isRectangle(int a, int b, int c, int d) {
    // Check if there are two pairs of equal sides
    if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
        return true;
    }
    return false;
}

int main(){

    int a,b,c,d;
    cout<<"Enter side of a: ";
    cin>>a;

    cout<<"Enter side of b: ";
    cin>>b;

    cout<<"Enter side of c: ";
    cin>>c;

    cout<<"Enter side of d: ";
    cin>>d;

    cout<<isRectangle(a,b,c,d);
}