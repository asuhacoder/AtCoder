#include<iostream>
using namespace std;

int dfs(string N, int ans, string new_N, int i) {
    if (N.size() == i) {
        if (new_N != "") {
            long long num = stoll(new_N);
            if (num % 3 == 0) {
                int diff = N.size() - new_N.size();
                ans = min(ans, diff);
            }
        }
        return ans;
    }
    ans = dfs(N, ans, new_N + N[i], i + 1);
    ans = dfs(N, ans, new_N, i + 1);
    return ans;
}

int main() {
    string N; cin >> N;
    int ans = dfs(N, N.size(), "", 0);
    if (ans == N.size()) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}
