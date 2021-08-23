#include<iostream>
using namespace std;

int main() {
    string X; cin >> X;
    bool isStrong = false;
    for (int i = 0; i < 4; i++) {
        if (X[0] != X[i]) {
            isStrong = true;
        }
    }
    if (!isStrong) {
        cout << "Weak" << endl;
        return 0;
    }
    isStrong = false;
    for (int i = 0; i < 3; i++) {
        if (X[i] + 1 != X[i + 1] and X[i] - 9 != X[i + 1]) {
            isStrong = true;
        }
    }
    if (isStrong) {
        cout << "Strong" << endl;
    } else {
        cout << "Weak" << endl;
    }
}
