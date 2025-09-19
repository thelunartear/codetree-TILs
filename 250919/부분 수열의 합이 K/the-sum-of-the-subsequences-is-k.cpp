#include <iostream>

using namespace std;

int n, k;
int arr[1000];
int psum[1001]={};

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        psum[i]=psum[i-1]+arr[i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n+1;j++)
        {
            if((psum[j]-psum[i]+arr[i])==k)
                ans++;
        }
    }

    cout<<ans;
    return 0;
}
