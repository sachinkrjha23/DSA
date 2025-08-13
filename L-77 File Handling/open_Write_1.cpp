#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // File ko open karna
    ofstream fout;
    fout.open("zoom.txt");   // agar file present nhi hui toh create kr dega, then open kr dega

    // Write karna
    fout<<"Hello India";

    fout.close();      // Resources release 
}