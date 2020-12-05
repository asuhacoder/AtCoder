#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<long double, long double>> vec;
    for (int i = 0; i < N; i++) {
        long double x, y; cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if ((vec[j].first - vec[i].first) * (vec[k].second - vec[j].second) == (vec[k].first - vec[j].first) * (vec[j].second - vec[i].second)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}
