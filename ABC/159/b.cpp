#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    string s1 = S.substr(0, S.size() / 2);
    string s2 = S.substr(S.size() / 2 + 2 / 2, S.size() / 2);
    if (s1 == s2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
