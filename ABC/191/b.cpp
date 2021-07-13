#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    vector<int> vec;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        vec.push_back(A);
    }
    for (int i = 0; i < N; i++) {
        if (vec[i] != X) {
            if (i == N - 1) {
                cout << vec[i];
            } else {
                cout << vec[i] << " ";
            }
        }
    }
    cout << endl;
}
