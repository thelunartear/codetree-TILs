#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=0;

    for(int x=1;x<=100;x++)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j] == 2*x)
                {
                    cnt++;
                }
            }
        }
        ans=max(cnt, ans);
    }
    cout<<ans;

    return 0;
}