#include<iostream>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;
    if (A > B) {
        cout << "Takahashi" << endl;
    } else if (A < B) {
        cout << "Aoki" << endl;
    } else if (A == B) {
        if (C == 0) {
            cout << "Aoki" << endl;
        } else {
            cout << "Takahashi" << endl;
        }
    }
}
