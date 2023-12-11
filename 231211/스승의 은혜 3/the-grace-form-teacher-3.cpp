#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int p[n], s[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> s[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            int cost = (i == j) ? p[j] / 2 + s[j] : p[j] + s[j];
            if (cost <= b) {
                b -= cost;
                cnt++;
            }
        }
        ans = max(ans, cnt);
        b += cnt * ((p[i] / 2) + s[i]); // 쿠폰 사용으로 인한 비용 복원
    }

    cout << ans;

    return 0;
}