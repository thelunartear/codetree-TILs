#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N, H, T;
    cin >> N >> H >> T;

    vector<int> height(N);
    for (int i = 0; i < N; ++i) {
        cin >> height[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(T + 1, INT_MAX / 2));
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= T; ++j) {
            // If the current height is already greater than or equal to H
            if (height[i] >= H) {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            } else {
                // Incrementing the height by 1
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + (H - height[i]));
                // Decreasing the height by 1 if the current count is greater than 0
                if (j > 0) {
                    dp[i + 1][j - 1] = min(dp[i + 1][j - 1], dp[i][j]);
                }
            }
        }
    }

    int minCost = INT_MAX;
    for (int j = 0; j <= T; ++j) {
        minCost = min(minCost, dp[N][j]);
    }

    cout << minCost << endl;

    return 0;
}