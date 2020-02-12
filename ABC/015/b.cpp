#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int count = 0, sum = 0;
    for (int i = 0; i < N; i++) {
        int a; cin >> a;
        if (a != 0) {
            count++;
            sum += a;
        }
    }
    cout << int((sum - 0.1) / count) + 1 << endl;
}
