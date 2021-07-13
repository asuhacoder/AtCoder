#include<iostream>
using namespace std;

int main() {
    int N, S, D; cin >> N >> S >> D;
    string ans = "No";
    for (int i = 0; i < N; i++) {
        int X, Y; cin >> X >> Y;
        if (X < S and Y > D) {
            ans = "Yes";
        }
    }
    cout << ans << endl;
}
