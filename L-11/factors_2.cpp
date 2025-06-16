#include <iostream>
using namespace std;

int main(){

    int i,n;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The factors of "<<n<<" is: "<<endl;

    i=1;

    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
}