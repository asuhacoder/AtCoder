#include<iostream>
using namespace std;

int main() {
    int N, R; cin >> N >> R;
    if (N < 10) {
        cout << 100 * (10 - N) + R << endl;
    } else {
        cout << R << endl;
    }
}
