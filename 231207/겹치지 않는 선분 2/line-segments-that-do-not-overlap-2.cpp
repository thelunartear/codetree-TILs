#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    int x1[n], x2[n];

    for(int i=0;i<n;i++)
    {
        cin>>x1[i]>>x2[i];
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        bool overlap=false;
        for(int j=0;j<n;j++)
        {
            if(j==i) continue;

            if((x1[i] <= x1[j] && x2[i] >= x2[j]) || (x1[i] >= x1[j] && x2[i] <= x2[j]))
            {
                overlap=true;
                break;
            }

            if(overlap==false)
                ans++;
        }
    }    

    cout<<ans;

    return 0;
}