#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int a[N], sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += a[i] * a[j];
        }
    }
    cout << sum << endl;
}
