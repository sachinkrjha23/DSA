#include<iostream>
using namespace std;

// a 
// b b
// c c c
// d d d d
// e e e e e

int main()
{
    
    char i,j;

    for(i=97;i<=101;i++)
    {
        for(j=97;j<=i;j++)
        {
        cout<<i<<" ";
    }

    cout<<endl;
    }
}