#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    string ans = "Yes";
    for (int i = 0; i < S.size(); i = i + 2) {
        if (!islower(S[i])) {
            ans = "No";
        }
    }
    for (int i = 1; i < S.size(); i = i + 2) {
        if (!isupper(S[i])) {
            ans = "No";
        }
    }
    cout << ans << endl;
}
