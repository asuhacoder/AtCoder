#include<iostream>
using namespace std;

int main() {
    int ans; ans = 700;
    for (int i = 0; i < 3; i++) {
        char s; cin >> s;
        if (s == 'o') {
            ans += 100;
        }
    }
    cout << ans << endl;
}
