#include<iostream>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    string field[H + 2] = {""};
    int ans = 0;
    for (int i = 0; i < W; i++) {
        field[0] += '#';
    }
    for (int i = 1; i < H + 1; i++) {
        cin >> field[i];
        field[i] = '#' + field[i] + '#';
    }
    for (int i = 0; i < W; i++) {
        field[H + 1] += '#';
    }
    for (int i = 1; i < H + 1; i++) {
        for (int j = 1; j < W + 1; j++) {
            if (field[i][j] == '.') {
                if (field[i - 1][j] == '.') {
                    ans++;
                }
                if (field[i + 1][j] == '.') {
                    ans++;
                }
                if (field[i][j - 1] == '.') {
                    ans++;
                }
                if (field[i][j + 1] == '.') {
                    ans++;
                }
            }
        }
    }
    cout << ans / 2 << endl;
}
