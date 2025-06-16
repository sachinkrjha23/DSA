#include<iostream>
using namespace std;

// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

int main()
{

    int i,j;
    
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=5;j+=1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
