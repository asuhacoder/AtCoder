#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 10000000;
    for (int i = 1; i < 1000000; i++) {
        int diff = 0;
        int extra = 0;
        diff = abs(n / i - i);
        extra = n - (n / i * i);
        ans = min(ans, diff + extra);
    }
    cout << ans << endl;
}
