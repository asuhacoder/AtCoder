#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, string>> vec;
    for (int i = 0; i < N; i++) {
        string S; cin >> S;
        int T; cin >> T;
        vec.push_back(make_pair(T, S));
    }
    sort(vec.begin(), vec.end());
    cout << vec[N - 2].second << endl;
}
