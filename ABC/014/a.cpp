#include<iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if (a % b == 0) {
        cout << 0 << endl;
    } else {
        cout << ((a / b) + 1) * b - a << endl;
    }
}
