#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '1') {
            if(i % 2 == 0) {
                cout << "Takahashi" << endl;
                break;
            } else {
                cout << "Aoki" << endl;
                break;
            }
        }
    }
}
