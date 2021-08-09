#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int A_max = 0;
    int B_min = 1000;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        A_max = max(A_max, A);
    }
    for (int i = 0; i < N; i++) {
        int B; cin >> B;
        B_min = min(B_min, B);
    }
    int diff = B_min - A_max;
    cout << max(0, diff + 1) << endl;
}
