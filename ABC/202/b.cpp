#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string S; cin >> S;
    string ans = "";
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '6') {
            ans += '9';
        } else if (S[i] == '9') {
            ans += '6';
        } else {
            ans += S[i];
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
