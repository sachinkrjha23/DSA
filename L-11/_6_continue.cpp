#include <iostream>
using namespace std;

int main(){

    int i,n=10;

    i=1;
    while(i<=n){
        if(i==6)
        {
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
}