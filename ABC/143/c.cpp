#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    string temp = "";
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] != temp[0]) {
            ans++;
            temp = S[i];
        }
    }
    cout << ans << endl;
}
