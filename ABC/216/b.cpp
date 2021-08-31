#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string nameS[N];
    string nameT[N];
    for (int i = 0; i < N; i ++) {
        string S, T; cin >> S >> T;
        nameS[i] = S;
        nameT[i] = T;
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (nameS[i] == nameS[j] and nameT[i] == nameT[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
