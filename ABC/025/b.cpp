#include<iostream>
using namespace std;

int main() {
    int N, A, B; cin >> N >> A >> B;
    int ans = 0;
    for (int i = 0;i < N; i++) {
        string s; cin >> s;
        int d; cin >> d;
        if (d < A) {
            if (s == "West") {
                ans -= A;
            } else {
                ans += A;
            }
        } else if (d > B) {
            if (s == "West") {
                ans -= B;
            } else {
                ans += B;
            }
        } else {
            if (s == "West") {
                ans -= d;
            } else {
                ans += d;
            }
        }
    }
    if (ans < 0) {
        cout << "West " << abs(ans) << endl;
    } else if (ans == 0) {
        cout << 0 << endl;
    } else {
        cout << "East " << ans << endl;
    }
}
