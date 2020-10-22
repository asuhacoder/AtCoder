#include<iostream>
using namespace std;

int gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    long long N, X; cin >> N >> X;
    long long city[N];
    long long max_num = 0;
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> city[i];
        city[i] = abs(city[i] - X);
    }
    ans = city[0];
    for (int i = 1; i < N; i++) {
        ans = gcd(ans, city[i]);
    }
    cout << ans << endl;
}
