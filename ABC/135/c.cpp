#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    long long int A[N + 1];
    for (int i = 0; i < N + 1; i++) {
        cin >> A[i];
    }
    long long int B[N];
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    long long int ans = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] >= B[i]) {
            A[i] -= B[i];
            ans += B[i];
            B[i] = 0;
        } else {
            ans += A[i];
            ans += min(B[i] - A[i], A[i + 1]);
            A[i + 1] -= min(B[i] - A[i], A[i + 1]);
        }
    }
    cout << ans << endl;
}
