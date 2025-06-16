#include<iostream>
using namespace std;

//     A
//    AB
//   ABC
//  ABCD
// ABCDE

int main(){

    int i,j;

    for(i=1;i<=5;i+=1)
    {

        for(j=1;j<=5-i;j+=1)
        cout<<" ";
        
        for(char k='A'; k<='A'+i-1; k+=1)
        cout<<k;
        
        cout<<endl;
    }
    
} 