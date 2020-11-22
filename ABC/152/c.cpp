#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int P[N];
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    int ans = 0;
    int min_value = 200000;
    for (int i = 0; i < N; i++) {
        if (P[i] <= min_value) {
            ans++;
        }
        min_value = min(min_value, P[i]);
    }
    cout << ans << endl;
}
