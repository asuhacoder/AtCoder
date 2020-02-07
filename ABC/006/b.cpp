#include<iostream>
using namespace std;
int memo[1000000] = {0};
int recursion(int num) {
    if (num == 1) {
        return 0;
    } else if (num == 2) {
        return 0;
    } else if (num == 3) {
        return 1;
    } else if (memo[num] != 0) {
        return memo[num];
    } else {
        memo[num] = recursion(num - 3) + recursion(num - 2) + recursion(num - 1);
        return memo[num] %= 10007;
    }
}

int main() {
    int n; cin >> n;
    if (n == 1) {
        cout << 0 << endl;
    } else if (n == 2) {
        cout << 0 << endl;
    } else {
        cout << recursion(n) % 10007 << endl;
    }
}

