#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter nth term: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"Square of "<<i<<" is: "<<i*i<<endl;
    }
}