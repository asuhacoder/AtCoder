#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S = to_string(N);
    int sum = 0;
    for (int i = 0; i < S.size(); i++) {
        sum += S[i] - '0';
    }
    if (N % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
