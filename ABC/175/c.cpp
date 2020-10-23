#include<iostream>
using namespace std;

int main() {
    long long X, K, D; cin >> X >> K >> D;
    if (abs(X) / D >= K) {
        cout << abs(X) - K * D << endl;
    } else {
        K -= abs(X) / D;
        X = abs(X) % D;
        if (K % 2 == 0) {
            cout << X << endl;
        } else {
            cout << abs(X - D) << endl;
        }
    }
}
