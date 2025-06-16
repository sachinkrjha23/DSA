#include<iostream>
using namespace std;

// for each step

// int main(){
//     int n,i,sum;
//     cout<<"Enter the number: ";
//     cin>>n;
    
//     sum = 0;
//     for(i=1; i<=n; i++){
//         sum+=i;
//         cout<<sum<<endl;
//     }
// }

// sum upto nth term

int main(){
    int n,i,sum;
    cout<<"Enter the number: ";
    cin>>n;
    
    sum = 0;
    for(i=1; i<=n; i+=1){
        sum+=i;
    }
    cout<<sum<<endl;
}