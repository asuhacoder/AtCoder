#include<iostream>
using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    int arr[N] = {0};
    for (int i = 0; i < Q; i++) {
        int L, R, T; cin >> L >> R >> T;
        for (int j = L - 1; j < R; j++) {
            arr[j] = T;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }
}
