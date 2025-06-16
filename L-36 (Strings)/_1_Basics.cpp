#include<iostream>
using namespace std;

int main(){

    // Initialized
    /*char arr[] = {'A','p','p','l','e'};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;

    // User Input
    char arra[20];
    cout<<"Enter elements: ";
    cin>>arra;
    arr[3]='\0'; //Null Character indexing
    cout<<arra;
    cout<<endl;

    // Defining a string
    string s = "SACHIN";
    cout<<s;
    cout<<endl;

    // User Defined
    string s0;
    cout<<"Enter the string s0: ";
    cin>>s0;
    cout<<s0;
    cout<<endl;*/

    // Storing data with spaces(without enter)
    string s1;
    cout<<"Enter the string s1: ";
    getline(cin,s1);
    cout<<s1<<endl;
    cout<<endl;
}