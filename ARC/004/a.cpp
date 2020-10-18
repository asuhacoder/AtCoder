#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> vec;
    double ans = 0;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i; j < N; j++) {
            ans = max(ans, sqrt(pow(abs(vec[i].first - vec[j].first), 2) + pow(abs(vec[i].second - vec[j].second), 2)));
        }
    }
    cout << fixed << setprecision(15) << ans << endl;
}
