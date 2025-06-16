#include<iostream>
using namespace std;

//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************

int main()
{

    int i,j,n;

    cout<<"Enter no of lines: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {

    // space print

    for(j=1;j<=n-i;j++)
    cout<<" ";

    //  * print

    for(j=1;j<=2*i-1;j++)
    cout<<"*";
        
    cout<<endl;
    }
}