#include<iostream>
using namespace std;

int main() {
    int W, H, N; cin >> W >> H >> N;
    int position1[2] = {W, H};
    int position2[2] = {0, 0};
    for (int i = 0; i < N; i++) {
        int x, y, a; cin >> x >> y >> a;
        if (a == 1) { // left
            if (position2[0] < x) {
                position2[0] = x;
            }
        } else if (a == 2) { // right
            if (position1[0] > x) {
                position1[0] = x;
            }
        } else if (a == 3) { // bottom
            if (position2[1] < y) {
                position2[1] = y;
            }
        } else { // top
            if (position1[1] > y) {
                position1[1] = y;
            }
        }
    }
    if (position1[0] < position2[0] || position1[1] < position2[1]) {
        cout << 0 << endl;
    } else {
        cout << (position1[0] - position2[0]) * (position1[1] - position2[1]) << endl;
    }
}
