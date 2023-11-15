#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, H, T;
    cin >> N >> H >> T;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    int minCost = N * T; // 최대 비용으로 초기화

    for (int i = 0; i <= N - T; ++i) {
        int cost = 0;
        for (int j = i; j < i + T; ++j) {
            if (heights[j] < H) {
                cost += H - heights[j];
            } else if (heights[j] > H) {
                cost += heights[j] - H;
            }
        }
        minCost = min(minCost, cost);
    }

    cout << minCost << endl;

    return 0;
}