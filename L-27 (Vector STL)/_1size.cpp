#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    // Updating an element
    v[1]=5;

    vector<int> v1(5, 1);
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;
}