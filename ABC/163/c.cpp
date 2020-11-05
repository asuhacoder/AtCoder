#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int A[N];
    int ans[N] = {0};
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
        ans[A[i] - 1]++;
    }
    for (int i = 0; i < N; i++) {
        cout << ans[i] << endl;
    }
}
