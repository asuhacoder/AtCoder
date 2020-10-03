#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    string acce = "b";
    for (int i = 1; i <= N / 2; i++) {
        if (i % 3 == 1) {
            acce = 'a' + acce + 'c';
        } else if (i % 3 == 2) {
            acce = 'c' + acce + 'a';
        } else {
            acce = 'b' + acce + 'b';
        }
    }
    if (S == acce) {
        cout << N / 2 << endl;
    } else {
        cout << -1 << endl;
    }
}
