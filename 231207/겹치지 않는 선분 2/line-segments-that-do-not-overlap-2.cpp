#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> segments;

    for (int i = 0; i < N; ++i) {
        int x1, x2;
        cin >> x1 >> x2;
        segments.push_back({x1, x2});
    }

    // 선분을 시작점을 기준으로 정렬합니다.
    sort(segments.begin(), segments.end());

    int count = 1; // 겹치지 않는 첫 번째 선분
    int right = segments[0].second; // 현재 가장 우측 끝점

    for (int i = 1; i < N; ++i) {
        if (segments[i].first > right) { // 겹치지 않는 선분인 경우
            ++count;
            right = segments[i].second; // 새로운 우측 끝점으로 갱신
        } else {
            right = max(right, segments[i].second); // 겹치는 경우 우측 끝점 갱신
        }
    }
    
    cout << count << endl;

    return 0;
}