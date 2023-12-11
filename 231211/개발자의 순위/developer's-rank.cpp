#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    int arr[k][n];
    
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(i == j) continue;
            bool flag = true;

            for(int x = 0; x < k; x++) {
                int ii = 0, ij = 0;
                for(int y = 0; y < n; y++) {
                    if(arr[x][y] == i)
                        ii = y;
                    if(arr[x][y] == j)
                        ij = y;
                }
                if(ii > ij) flag = false;
            }
            if(flag) cnt++;
        }
    }

    cout << cnt;

    return 0;
}