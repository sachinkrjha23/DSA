#include<iostream>
using namespace std;

char convert(char name)
{
    char ans = name-'a'+'A';
    return ans;
}

int main(){

    char name;
    cout<<"Enter charcter: ";
    cin>>name;

    cout<<"Converted character: "<<convert(name);

}

