#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, temp;
        cin >> a;
        temp = a;
        while (true) {
            if (temp % 2 == 1 && temp % 3 != 2) {
                ans += a - temp;
                break;
            } else {
                temp--;
            }
        }
    }
    cout << ans << endl;
}
