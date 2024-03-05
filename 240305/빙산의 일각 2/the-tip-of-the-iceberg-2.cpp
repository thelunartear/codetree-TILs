#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    
    cin>>n;
    int h[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    int ans=0;
    for(int i=0;i<1000;i++)
    {
        bool newPart=false;
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(h[j]>=i)
            {
                if(!newPart)
                {
                    newPart=true;
                    cnt++;
                }
            }
            else
            {
                newPart=false;
            }
        }
        ans=max(ans, cnt);
    }
    cout<<ans;
    return 0;
}