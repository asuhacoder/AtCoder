#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int N, D; cin >> N >> D;
    int X[N][D];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> X[i][j];
        }
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            double dis = 0;
            for (int k = 0; k < D; k++) {
                dis += pow(X[i][k] - X[j][k], 2);
            }
            if (sqrt(dis) == int(sqrt(dis))) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
