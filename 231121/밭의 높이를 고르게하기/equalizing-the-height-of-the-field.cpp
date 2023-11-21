#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n,h,t;
    cin>>n>>h>>t;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ans=INT_MAX;

    for(int i=0; i<=n-t; i++)
    {
        int cost=0;
        for(int j=i; j<i+t; j++)
        {
            cost+=abs(arr[j]-h);
        }
        ans=min(ans, cost);
    }

    cout<<ans;
    
    return 0;
}