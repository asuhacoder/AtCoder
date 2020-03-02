#include<iostream>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    int ans = 1;

    while (N / K != 0) {
        N = N / K;
        ans++;
    }
    cout << ans << endl;
}
