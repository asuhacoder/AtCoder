#include<iostream>
using namespace std;

int main() {
    int N, K, Q; cin >> N >> K >> Q;
    int point[N];
    for (int i = 0; i < N; i++) {
        point[i] = K - Q;
    }
    for (int i = 0; i < Q; i++) {
        int A; cin >> A;
        point[A - 1]++;
    }
    for (int i = 0; i < N; i++) {
        if (point[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
