// #include<iostream>
// using namespace std;

// int main(){
//     int n,i,product;
//     cout<<"Enter the number: ";
//     cin>>n;
    
//     product = 1;
//     for(i=1; i<=n; i+=1){
//         product*=i;
//     }
//     cout<<"Factorial of "<<n<<" is: ";
//     cout<<product<<endl;
// }

#include<iostream>
using namespace std;

int main(){
    int n,i,product;
    cout<<"Enter the number: ";
    cin>>n;
    
    product = 1;
    for(i=1; i<=n; i+=1){
        product*=i;
        cout<<"Factorial of "<<i<<" is: ";
        cout<<product<<endl;
    }
}