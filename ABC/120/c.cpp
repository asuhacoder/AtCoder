#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    int ans = S.size();
    bool canContinue = true;
    while(1) {
        if (!canContinue or S.size() == 0) {
            ans -= S.size();
            cout << ans << endl;
            return 0;
        }
        canContinue = false;
        for (int i = 0; i < S.size() - 1; i++) {
            if (S[i] != S[i + 1]) {
                S.erase(i, 2);
                canContinue = true;
                break;
            }
        }
    }
}
