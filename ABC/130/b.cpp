#include<iostream>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    int height = 0, ans = 1;
    for (int i = 0; i < N; i++) {
        int L; cin >> L;
        height += L;
        if (height <= X) {
            ans++;
        }
    }
    cout << ans << endl;
}
