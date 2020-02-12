#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (i <= N - 3) {
            if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
