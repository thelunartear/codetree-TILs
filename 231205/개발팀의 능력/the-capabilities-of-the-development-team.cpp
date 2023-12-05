#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int skills[5];

int diff(int i, int j, int k, int l) {
    int team1 = skills[i] + skills[j];
    int team2 = skills[k] + skills[l];
    int team3 = 0;

    for (int idx = 0; idx < 5; ++idx) {
        if (idx != i && idx != j && idx != k && idx != l) {
            team3 += skills[idx];
        }
    }

    return max({team1, team2, team3}) - min({team1, team2, team3});
}

int main() {
    for (int i = 0; i < 5; ++i) {
        cin >> skills[i];
    }

    int min_diff = INT_MAX;
    bool found = false;

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                for (int l = k + 1; l < 5; ++l) {
                    if (i != l && i != k && j != l && j != k) {
                        int curr_diff = diff(i, j, k, l);
                        if (curr_diff != 0 && curr_diff < min_diff) {
                            min_diff = curr_diff;
                            found = true;
                        }
                    }
                }
            }
        }
    }

    if (found) {
        cout << min_diff << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}