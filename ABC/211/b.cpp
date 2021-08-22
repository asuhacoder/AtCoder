#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string S[4];
    for (int i = 0; i < 4; i++) {
        string tmp; cin >> tmp;
        S[i] = tmp;
    }
    int a = sizeof(S) / sizeof(S[0]);
    sort(S, S + a);
    string ans = "Yes";
    if (S[0] != "2B") {
        ans = "No";
    }
    if (S[1] != "3B") {
        ans = "No";
    }
    if (S[2] != "H") {
        ans = "No";
    }
    if (S[3] != "HR") {
        ans = "No";
    }
    cout << ans << endl;
}
