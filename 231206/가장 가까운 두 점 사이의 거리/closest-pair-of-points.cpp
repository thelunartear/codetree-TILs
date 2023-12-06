#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin>>n;
    int x[n], y[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    int ans=INT_MAX;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i==j)
                continue;
            int min_dis=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            ans=min(ans, min_dis);
        }
    }

    cout<<ans;
    
    return 0;
}