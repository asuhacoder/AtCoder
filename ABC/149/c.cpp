#include<iostream>
using namespace std;

bool isPrime(int n) {
    bool ans = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            ans = false;
        }
    }
    return ans;
}

int main() {
    int X; cin >> X;
    int n = X;
    while(1) {
        if (isPrime(n)) {
            cout << n << endl;
            break;
        }
        n++;
    }
}
