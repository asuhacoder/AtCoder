#include<iostream>
using namespace std;

int main() {
    int S, T; cin >> S >> T;
    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                if (i + j + k <= S and i * j * k <= T) {
                    ans++;
                } else {
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
