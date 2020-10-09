#include<iostream>
using namespace std;

int main() {
    int K, S; cin >> K >> S;
    int ans = 0;
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            if (S - x - y <= K && S - x - y >= 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
