#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    double ans = 0;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        ans += 1.0 / A;
    }
    cout << 1.0 / ans << endl;
}
