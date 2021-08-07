#include<iostream>
using namespace std;

int main() {
    int H, W, Y, X; cin >> H >> W >> Y >> X;
    string S[H];
    for (int i = 0; i < H; i++) {
        string tmp; cin >> tmp;
        S[i] = tmp;
    }
    int ans = 1;
    for (int i = X - 1; i >= 0; i--) {
        if (i == X - 1) continue;
        if (S[Y - 1][i] == '#') {
            break;
        } else {
            ans++;
        }
    }
    for (int i = X - 1; i < W; i++) {
        if (i == X - 1) continue;
        if (S[Y - 1][i] == '#') {
            break;
        } else {
            ans++;
        }
    }
    for (int i = Y - 1; i >= 0; i--) {
        if (i == Y - 1) continue;
        if (S[i][X - 1] == '#') {
            break;
        } else {
            ans++;
        }
    }
    for (int i = Y - 1; i < H; i++) {
        if (i == Y - 1) continue;
        if (S[i][X - 1] == '#') {
            break;
        } else {
            ans++;
        }
    }
    cout << ans << endl;
}
