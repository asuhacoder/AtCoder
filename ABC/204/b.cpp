#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        ans += max(0, A - 10);
    }
    cout << ans << endl;
}
