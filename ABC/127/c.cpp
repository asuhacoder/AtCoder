#include<iostream>
using namespace std;

int main() {
    long long int N, M; cin >> N >> M;
    long long int L_max = 0;
    long long int R_min = 100000;
    for (int i = 0; i < M; i++) {
        long long L, R; cin >> L >> R;
        L_max = max(L_max, L);
        R_min = min(R_min, R);
    }
    int ans = R_min - L_max + 1;
    if (ans >= 0) {
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
}
