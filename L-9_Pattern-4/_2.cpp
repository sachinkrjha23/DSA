#include<iostream>
using namespace std;

//       1
//     1 2 1
//    1 2 3 2 1 
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

int main()
    {

int i,j,n;

cout<<"Enter no of lines: ";
cin>>n;

for(i=1;i<=n;i++){
        
        // space print
        for(j=1;j<=n-i;j++)
        cout<<" ";

        // 1 to i
        for(j=1;j<=i;j++)
        cout<<j<<" ";

        // i-1 to 1
        for(j=i-1;j>=1;j--)
        cout<<j<<" ";

        cout<<endl;

    }

}