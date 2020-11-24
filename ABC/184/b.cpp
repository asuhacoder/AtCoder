#include<iostream>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    string S; cin >> S;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'x' && X != 0) {
            X--;
        } else if (S[i] == 'o') {
            X++;
        }
    }
    cout << X << endl;
}
