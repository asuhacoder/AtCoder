#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N];
    int ans = 200;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int bit = 0; bit < (1<<N); bit++) {
        int plate1 = 0;
        int plate2 = 0;
        for (int i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                plate1 += arr[i];
            } else {
                plate2 += arr[i];
            }
        }
        ans = min(ans, max(plate1, plate2));
    }
    cout << ans << endl;
}
