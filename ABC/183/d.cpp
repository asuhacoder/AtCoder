#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    long long int N, W; cin >> N >> W;
    vector<pair<long long int, long long int>> vec;
    long long int max_value = 0;
    for (int i = 0; i < N; i++) {
        int S, T, P; cin >> S >> T >> P;
        vec.push_back(make_pair(S, P));
        vec.push_back(make_pair(T, -P));
    }
    sort(vec.begin(), vec.end());
    long long int usage = 0;
    for (int i = 0; i < vec.size(); i++) {
        usage += vec[i].second;
        if (usage > W) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
