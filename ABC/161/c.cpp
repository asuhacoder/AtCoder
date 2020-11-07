#include<iostream>
using namespace std;

int main() {
    long long int N, K; cin >> N >> K;
    N = N % K;
    long long ans = N;
    while (1) {
        if (N - K > 0) {
            N = abs(N - K);
            ans = min(ans, N);
        } else {
            N = abs(N - K);
            ans = min(ans, N);
            cout << ans << endl;
            break;
        }
    }
}
