#include<iostream>
using namespace std;

// 1 4 9 16 25 
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

int main()
{

    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
}