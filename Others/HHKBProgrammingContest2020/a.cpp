#include<iostream>
using namespace std;

int main() {
    char S, T; cin >> S >> T;
    if (S == 'Y') {
        char c = T - 32;
        cout << c << endl;
    } else {
        cout << T << endl;
    }
}
