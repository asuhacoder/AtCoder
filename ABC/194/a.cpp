#include<iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    if (A + B >= 15 and B >= 8) {
        cout << 1 << endl;
    } else if (A + B >= 10 and B >= 3) {
        cout << 2 << endl;
    } else if (A + B >= 3) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }
}