#include<iostream>
using namespace std;

int main() {
    int A, B, C, K, S, T; cin >> A >> B >> C >> K >> S >> T;
    if (S + T >= K) {
        cout << A * S + B * T - (S + T) * C << endl;
    } else {
        cout << A * S + B * T << endl;
    }
}
