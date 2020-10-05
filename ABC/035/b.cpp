#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    int T; cin >> T;
    int x = 0;
    int y = 0;
    int counter = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'L') {
            x--;
        } else if (S[i] == 'R') {
            x++;
        } else if (S[i] == 'U') {
            y++;
        } else if (S[i] == 'D') {
            y--;
        } else {
            counter++;
        }
    }
    int num = S.size() % 2;
    if (T == 1) {
        cout << abs(x) + abs(y) + counter << endl;
    } else {
        cout << max(num, abs(x) + abs(y) - counter) << endl;
    }
}
