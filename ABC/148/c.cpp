#include<iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    long long int ans = 0;
    while(1) {
        ans += A;
        if (ans % B == 0) {
            cout << ans << endl;
            break;
        }
    }
}
