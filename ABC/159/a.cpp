#include<iostream>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    int ans = 0;
    ans = N * (N - 1) / 2 + M * (M - 1) / 2;
    cout << ans << endl;
}

