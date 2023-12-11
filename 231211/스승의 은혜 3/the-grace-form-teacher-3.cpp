#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int p[n], s[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i] >> s[i];
    }

    int maxStudents = 0;

    for(int i = 0; i < n; i++) {
        int remain = b, cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) { // i번째 학생의 선물에 쿠폰을 사용하는 경우
                if(p[j] / 2 + s[j] <= remain) {
                    cnt++; // 쿠폰을 사용하여 선물을 구매할 수 있으면 cnt 증가
                    remain -= p[j] / 2 + s[j]; // 사용한 예산 차감
                }
            } else {
                if(p[j] + s[j] <= remain) {
                    cnt++; // 쿠폰을 사용하지 않고 선물을 구매할 수 있으면 cnt 증가
                    remain -= p[j] + s[j]; // 사용한 예산 차감
                }
            }
        }
        maxStudents = max(maxStudents, cnt);
    }

    cout << maxStudents << endl;

    return 0;
}