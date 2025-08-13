#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("zoom.txt");

    char c;
    // fin >> c;        space ko read nhi kr sakta
    c = fin.get();             // space ko read karne ke liye ye use kiya jaata h
    while (!fin.eof())
    {
        cout << c;
        c=fin.get();
    };

    fin.close();
}