#include<iostream>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    string A[N];
    string B[M];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N - M + 1; i++) {
        for (int j = 0; j < N - M + 1; j++) {
            bool includeB = true;
            for (int k = 0; k < M; k++) {
                // cout << "A[k].substr(j, M): " << A[k].substr(j, M) << " B[k]: " << B[k] << endl;
                // cout << "i: " << i << " j: " << j << " k: " << k << endl;
                if (A[i + k].substr(j, M) != B[k]) {
                    includeB = false;
                }
            }
            // cout << "includeB: " << includeB << endl;
            if (includeB) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
