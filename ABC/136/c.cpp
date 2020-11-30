#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    int max_value = 0;
    bool ans = true;
    for (int i = 0; i < N; i++) {
        if (max_value <= H[i]) {
            max_value = H[i];
        } else {
            if (H[i] != max_value - 1) {
                ans = false;
            }
        }
    }
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
