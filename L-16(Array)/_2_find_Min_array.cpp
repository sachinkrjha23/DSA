#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5] = {21,36,12,7,68};
    int ans = INT_MAX;

    // Min Value
    for(int i=0;i<5;i++){
        if (arr[i]<ans)
        ans = arr[i];
    }
    cout<<ans<<endl;

    ans = INT_MIN;
    // Max Value
    for(int i=0;i<5;i++)
    {
        if (arr[i]>ans)
        ans = arr[i];
    }
    cout<<ans<<endl;
    return 0;
}