#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int N; cin >> N;
    long long int X[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    long long int ans = 1000000;
    for (int i = 1; i <= 100; i++) {
        long long int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += pow(X[j] - i, 2);
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
