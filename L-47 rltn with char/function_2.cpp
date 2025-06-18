#include <iostream>
using namespace std;

void incr(int *ptr)
{
    *ptr=*ptr+1;
}

int main()
{
    int num = 10;
    int temp = num;
    incr(&num);
    cout<<num;
}