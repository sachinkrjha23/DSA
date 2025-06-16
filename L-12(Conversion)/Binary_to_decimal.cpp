#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Binary number to convert: ";
    cin>>num;
    int rem, ans=0, mul=1;
    cout<<"The Deciaml form of "<<num<<" is: ";

    while(num>0){
        
        rem = num%10;
        
        num /=10;

        ans += rem*mul;

        mul*=2;
    }
    cout<<ans<<endl;
        
}