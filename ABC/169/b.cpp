#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    long long int A[N];
    long long int ans = 1;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    for (int i = 0; i < N; i++) {
        if (A[i] > 1000000000000000000 / ans) {
            cout << -1 << endl;
            return 0;
        }
        ans *= A[i];
    }
    cout << ans << endl;
}
