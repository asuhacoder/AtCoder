#include<iostream>
using namespace std;

long long int rec(long long int n, long long int x) {
    if (n == -1) {
        return 0;
    } else {
        return n / x + 1;
    }
}

int main() {
    long long int a, b, x; cin >> a >> b >> x;
    cout << rec(b, x) - rec(a - 1, x) << endl;
}
