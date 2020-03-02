#include<iostream>
using namespace std;

int main() {
    int A[9], record[9], N;
    for (int i = 0; i < 9; i++) {
        cin >> A[i];
        record[i] = 0;
    }
    cin >> N;
    for (int i = 0; i < N; i++) {
        int b; cin >> b;
        for (int j = 0; j < 9; j++) {
            if (A[j] == b) {
                record[j] = 1;
            }
        }
    }
    if (record[0] + record[1] + record[2] == 3) {
        cout << "Yes" << endl;
    } else if (record[3] + record[4] + record[5] == 3) {
        cout << "Yes" << endl;
    } else if (record[6] + record[7] + record[8] == 3) {
        cout << "Yes" << endl;
    } else if (record[0] + record[3] + record[6] == 3) {
        cout << "Yes" << endl;
    } else if (record[1] + record[4] + record[7] == 3) {
        cout << "Yes" << endl;
    } else if (record[2] + record[5] + record[8] == 3) {
        cout << "Yes" << endl;
    } else if (record[0] + record[4] + record[8] == 3) {
        cout << "Yes" << endl;
    } else if (record[2] + record[4] +record[6] == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
