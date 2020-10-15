#include<iostream>
using namespace std;

int main() {
    long long int N, Y; cin >> N >> Y;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= N; k++) {
                if (i + j + k > N) {
                    break;
                }
                if (i * 10000 + j * 5000 + k * 1000 == Y && i + j + k == N) {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
            if (i + j > N) {
                break;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
