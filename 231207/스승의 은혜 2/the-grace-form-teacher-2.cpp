#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin>>n>>b;

    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    sort(p, p+n);

    int ans=0;

    for(int i=0;i<n;i++)
    {
        int total=0, cnt=0;
        for(int j=0;j<n;j++)
        {
            int now=0;
            if(i==j) now=p[j]/2;
            else now=p[j];
            if(total+now<=b)
            {
                total+=now;
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout<<ans;

    return 0;
}