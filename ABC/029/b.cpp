#include<iostream>
using namespace std;

int main() {
    string S[12];
    int ans = 0;
    for (int i = 0; i < 12; i++) {
        cin >> S[i];
        for (int j = 0; j < S[i].size(); j++) {
            if (S[i][j] == 'r') {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}
