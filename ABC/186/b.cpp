#include<iostream>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    int board[H][W];
    int min_value = 100;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int A; cin >> A;
            board[i][j] = A;
            min_value = min(min_value, A);
        }
    }
    int ans = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            ans += board[i][j] - min_value;
        }
    }
    cout << ans << endl;
}
