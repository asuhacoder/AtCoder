#include<iostream>
using namespace std;

int main() {
    string S, T; cin >> S >> T;
    bool isSame = true;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == T[i] || (S[i] == '@' && (T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r')) || (T[i] == '@' && (S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r'))) {
            continue;
        } else {
            isSame = false;
        }
    }
    if (isSame) {
        cout << "You can win" << endl;
    } else {
        cout << "You will lose" << endl;
    }
}
