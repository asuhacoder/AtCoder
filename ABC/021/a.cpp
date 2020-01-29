#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    if (N % 2 == 0) {
        cout << N / 2 << endl;
    } else {
        cout << N / 2 + 1 << endl;
        cout << "1" << endl;
    }
    for (int i = 0; i < N / 2; i++) {
        cout << "2" << endl;
    }
}
