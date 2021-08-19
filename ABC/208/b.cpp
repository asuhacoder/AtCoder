#include<iostream>
using namespace std;

int main() {
    int P; cin >> P;
    int coins[10];
    int factorial = 1;
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        factorial *= i + 1;
        coins[i] = factorial;
    }
    for (int i = 9; i >= 0; i--) {
        if (P / coins[i] <= 100) {
            ans += P / coins[i];
            P %= coins[i];
        } else {
            P -= coins[i] * 100;
            ans += 100;
        }
    }
    cout << ans << endl;
}
