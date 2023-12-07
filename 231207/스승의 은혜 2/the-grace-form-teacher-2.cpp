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
       int total = 0;
       for (int j = 0; j <= i; ++j) {
            if (p[j] / 2 <= b) 
            {
                b -= p[j] / 2;
                ++total;
            } 
            else 
            {
                break;
            }
        }
        ans = max(ans, total);
        b += p[i] / 2;
    }

    cout<<ans;

    return 0;
}