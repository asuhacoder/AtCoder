#include<iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++) {
        char s; cin >> s;
        if (s == 'a') {
            a++;
        } else if (s == 'b') {
            b++;
        } else if (s == 'c') {
            c++;
        }
    }
    if (a == 1 && b == 1 && c == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}