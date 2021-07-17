#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    bool can_buy = false;
    int ans = 1000000000;
    for (int i = 0; i < N; i++) {
        int A, P, X; cin >> A >> P >> X;
        if (X - A > 0) {
            ans = min(ans, P);
            can_buy = true;
        }
    }
    if (can_buy) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
}
