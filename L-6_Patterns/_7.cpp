// M-1

// #include<iostream>
// using namespace std;

// int main()
// {

    // char i,j;
    
    // for(i=97;i<=101;i++)
    // {
    //     for(j=97;j<=101;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
// }

// M-2

#include<iostream>
using namespace std;

// a a a a a 
// b b b b b
// c c c c c
// d d d d d
// e e e e e

int main(){

    int row,col;

    for(row=1; row<=5; row++){
        char name = 'a'+row-1;
        for(col=1;col<=5;col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}