#include<iostream>
using namespace std;

//     1
//    22
//   333
//  4444
// 55555

int main(){

    int i,j;

    for(i=1;i<=5;i++){

        for(j=1;j<=5-i;j+=1)
        cout<<" ";
        
        for(j=1;j<=i;j+=1)
        cout<<i;
        
        cout<<endl;
    }
    
} 