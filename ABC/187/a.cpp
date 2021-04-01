#include<iostream>
using namespace std;

int main() {
    string A, B; cin >> A >> B;
    int a_sum = 0;
    for (int i = 0; i < A.size(); i++) {
        a_sum += A[i] - '0';
    }
    int b_sum = 0;
    for (int i = 0; i < B.size(); i++) {
        b_sum += B[i] - '0';
    }
    cout << max(a_sum, b_sum) << endl;
}
