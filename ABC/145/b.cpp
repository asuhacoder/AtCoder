#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    string S1 = S.substr(0, N / 2);
    string S2 = S.substr(N / 2);
    if (S1 == S2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
