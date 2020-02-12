#include<iostream>
using namespace std;

int main() {
    int N, K, M; cin >> N >> K >> M;
    int sum = 0, a, ans;
    for (int i = 0; i < N - 1; i++) {
        cin >> a;
        sum += a;
    }
    ans = N * M - sum;
    if (ans > K) {
        cout << -1 << endl;
    } else if (ans < 0) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
}
