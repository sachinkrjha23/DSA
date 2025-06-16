#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(34);
    v.push_back(45);
    v.push_back(446);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    // // Erase an element

    v.erase(v.begin()+1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of v1: "<<v.size()<<endl;
    cout<<"Capacity of v1: "<<v.capacity()<<endl;

    // // Insertion of element

    v.insert(v.begin()+3,63);
    cout<<"Size of v2: "<<v.size()<<endl;
    cout<<"Capacity of v2: "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    // Print first element
    vector<int>v1;
    v1.push_back(2);
    v1.push_back(12);
    v1.push_back(22);
    v1.push_back(23);
    cout<<v1[0]<<endl;
    cout<<v1.front()<<endl;

    // Last Element

    cout<<v1[v1.size()-1]<<endl;
    cout<<v1.back()<<endl;

    // Copy value of 1 vector to another
    vector<int>clone;
    clone = v1;
    cout<<clone.size();
    

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(122);
    v2.push_back(12);
    v2.push_back(238);

    // Sort
    sort(v2.begin(), v2.end());
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;

    // Reverse Sort
    // sort(v2.begin(), v2.end(), greater<int>());
    sort(v2.rbegin(), v2.rend());
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";

}