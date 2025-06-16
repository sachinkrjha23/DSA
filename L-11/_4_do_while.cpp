#include <iostream>
using namespace std;

int main(){
    int i,n,sum;

    cout<<"Enter n: ";
    cin>>n;

    sum = 0;
    i=1;
    do{
        sum+=i;
        i++;
    }while(i<=n);

    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    
}