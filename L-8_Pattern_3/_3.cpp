#include<iostream>
using namespace std;

//     1
//    12
//   123
//  1234
// 12345

int main(){

    int i,j;

    for(i=1;i<=5;i++){

        for(j=1;j<=5-i;j+=1)
        cout<<" ";
        
        for(j=1;j<=i;j+=1)
        cout<<j;
        
        cout<<endl;
    }
    
} 