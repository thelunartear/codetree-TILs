#include <iostream>
#include <algorithm>

using namespace std;

int N, K, B;
int missing[100001];
int psum[100001];

int main() {
    cin >> N >> K >> B;

    for (int i = 0; i < B; i++) {
        cin >> missing[i];
    }

    // Please write your code here.
    sort(missing, missing+B);

    for(int i=0;i<B;i++)
    {
        psum[missing[i]]=1;
    }

    for(int i=1;i<=N;i++)
    {
        psum[i]+=psum[i-1];
    }

    int ans=1e9;

    for(int i=K;i<=N;i++)
    {
        int cnt=psum[i]-psum[i-K];
        ans=min(ans,cnt);
    }

    cout<<ans;
    
    return 0;
}
