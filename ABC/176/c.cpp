#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    long long int A[N];
    long long int ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i < N; i++) {
        if (A[i] < A[i - 1]) {
            ans += A[i - 1] - A[i];
            A[i] = A[i - 1];
        }
    }
    cout << ans << endl;
}
