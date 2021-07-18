#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    cout << S.substr(1, S.size()) + S[0] << endl;
}
