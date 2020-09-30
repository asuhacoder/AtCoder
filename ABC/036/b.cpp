#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S[N];
    char ans[N][N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ans[j][N - 1 - i] = S[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}
