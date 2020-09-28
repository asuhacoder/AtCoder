#include<iostream>
#include<algorithm>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int N; cin >> N;
    int R[N];
    double ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }
    sort(R, R + N, greater<int>());
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            ans += R[i] * R[i];
        } else {
            ans -= R[i] * R[i];
        }
    }
    cout << fixed;
    cout << setprecision(10) << ans * M_PI << endl;
}
