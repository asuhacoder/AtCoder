#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int K; cin >> K;
    long long int ans = 0;
    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= K; j++) {
            for (int k = 1; k <= K; k++) {
                ans += gcd(i, gcd(j, k));
            }
        }
    }
    cout << ans << endl;
}
