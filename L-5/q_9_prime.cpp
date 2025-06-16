#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(n<2){
        cout<<"Not Prime";
        return 0;
    }
    else{
    for(i=2; i<n; i++){
        if(n%i == 0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
    } }
    cout<<"Prime";
}