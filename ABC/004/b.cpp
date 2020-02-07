#include<iostream>
using namespace std;

int main() {
    string s[16];
    for (int i = 0; i < 16; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < 16; i++) {
        if ((i + 1) % 4 == 0) {
            cout << s[15 - i] << endl;
        } else {
            cout << s[15 - i] << ' ';
        }
    }
}
