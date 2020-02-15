#include<iostream>
using namespace std;

int main() {
    int N, L; cin >> N >> L;
    int taste_array[N], MIN = 300, ans = 0, MIN_i;
    for (int i = 0; i < N; i++) {
        taste_array[i] = L + i;
        if (MIN > abs(taste_array[i])) {
            MIN = abs(taste_array[i]);
            MIN_i = i;
        }
    }
    for (int i = 0; i < N; i++) {
        if (i == MIN_i) {
            continue;
        } else {
            ans += taste_array[i];
        }
    }
    cout << ans << endl;
}
