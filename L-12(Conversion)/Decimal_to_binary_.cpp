#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Decimal number to convert: ";
    cin>>num;
    int rem, ans=0, mul=1;
    cout<<"The Binary form of "<<num<<" is: ";

    while(num>0){
        // reminder
        rem = num%2;
        // quotient
        num /=2;
        // answer
        ans = rem*mul+ans;
        // multiply
        mul*=10;
    }
    cout<<ans<<endl;
        
}