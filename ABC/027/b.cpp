#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int a[N];
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int ave = sum / N;
    if (sum % N == 0) {
        int temp = 0;
        int block = 0;
        for (int i = 0; i < N; i++) {
            temp++;
            block += a[i];
            if (block / temp == ave && block % temp == 0) {
                temp = 0;
                block = 0;
            } else {
                ans++;
            }
        }
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
}
