#include<iostream>
using namespace std;

int main() {
    int X, A, B; cin >> X >> A >> B;
    if (A >= B) {
        cout << "delicious" << endl;
    } else if (A + X >= B) {
        cout << "safe" << endl;
    } else {
        cout << "dangerous" << endl;
    }
}
