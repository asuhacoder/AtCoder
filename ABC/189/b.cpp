#include<iostream>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < N; i++) {
        int V, P; cin >> V >> P;
        sum += V * P;
        if (sum > X * 100) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}
