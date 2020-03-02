#include<iostream>
using namespace std;

int main () {
    int N; cin >> N;
    bool will_approve = true;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        if (A % 2 == 0) {
            if (A % 3 == 0 || A % 5 == 0) {
                continue;
            } else {
                will_approve = false;
                break;
            }
        }
    }
    if (will_approve) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
}
