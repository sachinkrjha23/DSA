#include<iostream>
using namespace std;

//     1
//    21
//   321
//  4321
// 54321

int main(){

    int i,j,k;

    for(i=1;i<=5;i+=1)
    {

        for(j=1;j<=5-i;j+=1)
        cout<<" ";
        
        for(k=i; k>=1; k--)
        cout<<k;
        
        cout<<endl;
    }
    
} 