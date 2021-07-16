#include<iostream>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << max(a - c, max(a - d, max(b - c, b - d))) << endl;
}
