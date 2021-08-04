#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        A[i] = x;
        B[i] = y;
    }
    int a_min = A[0];
    int key = 0;
    for (int i = 0; i < N; i++) {
        if (a_min > A[i]) {
            a_min = min(a_min, A[i]);
            key = i;
        }
    }
    B[key] += a_min;
    int b_min = B[0];
    for (int i = 0; i < N; i++) {
        b_min = min(b_min, B[i]);
    }
    cout << max(a_min, b_min) << endl;
}
