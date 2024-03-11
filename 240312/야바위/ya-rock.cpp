#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    int a[n], b[n], c[n];
    int y[4];

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }

    int max_score=0;

    for(int i=1;i<=3;i++)
    {
        y[1]=y[2]=y[3]=0;
        y[i]=1;

        int score=0;

        for(int j=0;j<n;j++)
        {
            swap(y[a[j]], y[b[j]]);

            if(y[c[j]]) score++;
        }
        max_score = max(max_score, score);
    }

    cout<<max_score;
    
    return 0;
}