#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    int bombs[n];
    for(int i=0;i<n;i++){
        cin>>bombs[i];
    }

    int ans=-1;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<=min(i+k, n-1); j++)
        {
            if(bombs[i]==bombs[j])
            {
                ans=max(ans, bombs[i]);
                break;
            }
        }
    }

    cout<<ans;

    return 0;
}