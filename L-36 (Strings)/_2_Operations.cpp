#include<iostream>
using namespace std;

int main(){
    // size
    /*string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size();*/

    // Append 
    string s1 = "Sachin ";
    string s2 = "Piyush";
    string s3, s4, s5;

    // Method 1
    s3 = s1 + s2;

    // Method 2
    s4 = s1.append(s2);

    // Assign s1 to s5
    s5 = s1;

    cout << s3 << endl;
    cout << s4 << endl; 

    // Assigning at last
    string s6 = "Me ";
    s6.push_back('I');
    cout<<endl<<s6;

    // Deleting from last
    string s7 = "Me";
    s7.pop_back();
    cout<<s7;
}