#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, char>> people;
    for (int i = 0; i < N; ++i) {
        int position;
        char letter;
        cin >> position >> letter;
        people.push_back(make_pair(position, letter));
    }

    sort(people.begin(), people.end());

    int maxPhotoSize = 0;

    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int gCount = 0, hCount = 0;
            for (int k = i; k <= j; ++k) {
                if (people[k].second == 'G') gCount++;
                else hCount++;
            }
            if (gCount == hCount && gCount > 0 && hCount > 0) {
                int photoSize = people[j].first - people[i].first;
                maxPhotoSize = max(maxPhotoSize, photoSize);
            }
        }
    }

    cout << maxPhotoSize << endl;

    return 0;
}