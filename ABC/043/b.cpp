#include<iostream>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'B') {
            ans += s[i];
        } else {
            ans = ans.substr(0, ans.size() - 1);
        }
    }
    cout << ans << endl;
}
