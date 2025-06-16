#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1; i<=10; i+=1){
        cout<<n<<" x "<<i<<" = ";
        cout<<n*i<<endl;
    }
}