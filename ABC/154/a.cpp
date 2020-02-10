#include<iostream>
using namespace std;

int main() {
    string S, T; cin >> S >> T;
    int A, B; cin >> A >> B;
    string U; cin >> U;
    if (S == U) {
        cout << A - 1 << ' ' << B << endl;
    } else {
        cout << A << ' ' << B - 1 << endl;
    }
}
