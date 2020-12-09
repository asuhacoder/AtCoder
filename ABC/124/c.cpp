#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    char first = S[0];
    int ans = 0;
    for (int i = 1; i < S.size(); i++) {
        if (i % 2 == 1) {
            if (S[i] == first) {
                ans++;
            }
        } else {
            if (S[i] != first) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
