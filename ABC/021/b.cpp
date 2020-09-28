#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int a, b; cin >> a >> b;
    int K; cin >> K;
    int P[K];
    string ans = "YES";
    for (int i = 0; i < K; i++) {
        cin >> P[i];
        for (int j = 0; j < i; j++) {
            if (i == 0) {
                break;
            } else {
                if (P[i] == P[j]) {
                    ans = "NO";
                    break;
                }
            }
        }
    }
    if (N < K + 2) {
        ans = "NO";
    }
    cout << ans << endl;
}
