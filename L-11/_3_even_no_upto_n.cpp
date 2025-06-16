#include <iostream>
using namespace std;

int main(){
    int i,n;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The first "<<n<<" even numbers are: "<<endl;

    i=1;

    while(i<=n){
        cout<<(i*2)<<" ";
        i++;
    }
    cout<<endl;
}