#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int ans = 0;
    int V[N], C[N];
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    for (int i = 0; i < N; i++){
        int diff = V[i] - C[i];
        if (diff > 0) {
            ans += diff;
        }
    }
    cout << ans << endl;
}
