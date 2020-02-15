#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int error_count = 0;
    for (int i = 1; i <= N; i++) {
        int p; cin >> p;
        if (p != i) {
            error_count++;
        }
    }
    if (error_count == 2 || error_count == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
