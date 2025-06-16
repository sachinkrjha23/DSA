//  Prime numbers and factorial
#include<iostream>
using namespace std;

bool Prime(int n){
    if(n<2)
    return 0;

    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

int fact(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++)
    factorial *= i;
    return factorial;
}

int main(){

    int a, b;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    // A is prime or not
    cout<<Prime(a)<<endl;

    // B is prime or not
    cout<<Prime(b)<<endl;

    // A Ka Factorial
    cout<<fact(a)<<endl;

    // B Ka Factorial
    cout<<fact(b)<<endl;

    // B-A is prime or not
    cout<<Prime(b-a)<<endl;

    // B-A Ka Factorial
    cout<<fact(b-a)<<endl;

}