#include<iostream>
using namespace std;

int main() {
    int N, T; cin >> N >> T;
    int A[N];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i < N; i++) {
        ans += min(T, A[i] - A[i - 1]);
    }
    cout << ans + T << endl;
}
