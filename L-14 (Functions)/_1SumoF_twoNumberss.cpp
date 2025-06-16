#include<iostream>
using namespace std;

int Sum(int x, int y, int z) // Function Declaration
{

    int ans = x+y+z;
    return ans;
}
void fun(){
    cout<<"Hello Sachin";
}
int main(){

    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    // Function Call
    cout<<Sum(a,b,c)<<endl;

    fun();
}