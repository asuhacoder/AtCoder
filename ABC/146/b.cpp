#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    for (int i = 0; i < S.size(); i++) {
        char c = S[i];
        if(c + N > 'Z') {
            cout << char(c + N - 26);
        } else {
            cout << char(c + N);
        }
    }
    cout << endl;
}
