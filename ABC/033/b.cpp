#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    pair<string, int> towns[N];
    int sum = 0;
    string ans = "atcoder";
    for (int i = 0; i < N; i++) {
        string s;
        int p;
        cin >> s >> p;
        towns[i] = make_pair(s, p);
        sum +=  p;
    }
    for (int i = 0; i < N; i++) {
        if (towns[i].second > sum / 2) {
            ans = towns[i].first;
            break;
        }
    }
    cout << ans << endl;
}
