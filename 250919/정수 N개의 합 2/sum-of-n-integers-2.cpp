#include <iostream>

using namespace std;

int n, k;
int arr[100000];
int pre[100001];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans=-1e9;
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+arr[i-1];
    }

    for(int i=0;i+k<n;i++)
    {
        int sum=pre[i+k]-pre[i];
        ans=max(ans,sum);
    }

    cout<<ans;

    return 0;
}
