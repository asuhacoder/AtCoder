#include<iostream>
using namespace std;

int main() {
    long long int A, B, C, D; cin >> A >> B >> C >> D;
    long long int cyan_sum = A;
    long long int red_sum = 0;
    for (int i = 1; i <= A; i++) {
        cyan_sum += B;
        red_sum += C;
        if (cyan_sum <= red_sum * D) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
