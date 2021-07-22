#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int A1, A2, A3; cin >> A1 >> A2 >> A3;
    int A[3];
    A[0] = A1;
    A[1] = A2;
    A[2] = A3;
    int n = sizeof(A) / sizeof(A[0]);
    sort(A, A + n);
    if (A[2] - A[1] == A[1] - A[0]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
