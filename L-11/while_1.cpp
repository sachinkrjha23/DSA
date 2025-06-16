#include <iostream>
using namespace std;

int main(){

    int i,n;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The multiplication table of "<<n<<" is: "<<endl;

    i=1;
    while(i<=10){
        cout<< n<<" X "<< i<<" = "<< n*i<<endl;
        i++;
    }
}