#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    if (S[0] == S[1] and S[1] == S[2]) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }
}
