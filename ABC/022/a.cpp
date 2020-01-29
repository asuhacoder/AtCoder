#include<iostream>
using namespace std;

int main() {
    int N, S, T, W; cin >> N >> S >> T >> W;
    int ans = 0;
    if (W >= S && W <= T) {
        ans++;
    }
    for (int i = 1; i < N; i++) {
        int A; cin >> A;
        W += A;
        if (W >= S && W <= T) {
            ans++;
        }
    }
    cout << ans << endl;
}
