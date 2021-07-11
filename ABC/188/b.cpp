#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> vecA;
    vector<int> vecB;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        vecA.push_back(A);
    }
    for (int i = 0; i < N; i++) {
        int B; cin >> B;
        vecB.push_back(B);
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += vecA[i] * vecB[i];
    }
    if (ans == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
