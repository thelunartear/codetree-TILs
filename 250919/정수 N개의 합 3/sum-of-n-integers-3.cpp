#include <iostream>
#include <climits>
using namespace std;

int n, k;
int arr[500][500];
int psum[501][501]={};

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Please write your code here.
    int ans=INT_MIN;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            psum[i][j]=psum[i-1][j]+psum[i][j-1]-psum[i-1][j-1]+arr[i-1][j-1];
        }
    }

    for(int i=k;i<=n;i++)
    {
        for(int j=k;j<=n;j++)
        {
            int sum=psum[i][j]-psum[i-k][j]-psum[i][j-k]+psum[i-k][j-k];
            ans=max(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}
