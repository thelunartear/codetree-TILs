#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// 제외할 점을 일일이 가정해보고, 남은 점들에 대해 최소 직사각형의 넓이를 구하기
// 최소 직사각형을 이루는 x, y 경곗값은 남아있는 점들의 x좌표, y좌표의 최대 최소 값임을 이용한다

int main() {
    int n;
    cin>>n;

    int x[n], y[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    int ans=INT_MAX;

    // 빼야하는 점의 위치를 정하기
    for(int i=0;i<n;i++)
    {
        // 뺸 점을 제외한 나머지 점들을 포함하기 위한 직사각형의 최소 넓이 구하기
        // 남은 점들의 x좌표 중 최소, 최대 y좌표 중 최소 최대를 구해야 한다
        int minX=40000, maxX=1;
        int minY=40000, maxY=1;

        for(int j=0;j<n;j++)
        {
            if(j==i) continue;

            minX=min(minX,x[j]);
            maxX=max(maxX,x[j]);
            minY=min(minY,y[j]);
            maxY=max(maxY,y[j]);
        }

        ans = min(ans, (maxX-minX)*(maxY-minY));
    }

    cout<<ans;
    
    return 0;
}