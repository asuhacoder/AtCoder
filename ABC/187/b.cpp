#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> vec;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double gradient = double((vec[j].second - vec[i].second)) / (vec[j].first - vec[i].first);
            if (gradient <= 1 and gradient >= -1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
