#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        A[i] = tmp;
    }
    int n = sizeof(A) / sizeof(A[0]);
    sort(A, A + n);
    string ans = "Yes";
    for (int i = 0; i < N; i++) {
        if (A[i] != i + 1) {
            ans = "No";
        }
    }
    cout << ans << endl;
}
