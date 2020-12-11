#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    long long int N, M; cin >> N >> M;
    vector<pair<long long int, long long int>> vec;
    for (int i = 0; i < N; i++) {
        long long int A, B; cin >> A >> B;
        vec.push_back(make_pair(A, B));
    }
    sort(vec.begin(), vec.end());
    long long int ans = 0;
    for (int i = 0; i < N; i++) {
        if (M > vec[i].second) {
            M -= vec[i].second;
            ans += vec[i].first * vec[i].second;
        } else {
            ans += M * vec[i].first;
            M = 0;
        }
    }
    cout << ans << endl;
}
