#include<iostream>
using namespace std;

int main() {
    int A, B, W; cin >> A >> B >> W;
    int ans = 0, min_value = 1000000, max_value = 0;
    for (int i = 0; i <= 1000000; i++) {
        if (i * A <= W * 1000 and i * B >= W * 1000) {
            ans++;
            min_value = min(min_value, i);
            max_value = max(max_value, i);
        }
    }
    if (ans == 0) {
        cout << "UNSATISFIABLE" << endl;
    } else {
        cout << min_value << " " << max_value << endl;
    }
}
