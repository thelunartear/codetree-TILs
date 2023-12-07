#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n], b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        int count[1000]={};
        for(int j=0;j<n;j++)
        {
            if(j==i) continue;

            for(int k=a[j];k<b[j];k++)
                count[k]++;
        }

        int time=0;
        for(int j=1;j<1000;j++)
            if(count[j]) time++;

        ans=max(ans,time);
    }

    cout<<ans;
    
    return 0;
}