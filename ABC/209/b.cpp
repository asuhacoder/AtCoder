#include<iostream>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int A; cin >> A;
        if (i % 2 == 0) {
            sum += A - 1;
        } else {
            sum += A;
        }
    }
    if (sum <= X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
