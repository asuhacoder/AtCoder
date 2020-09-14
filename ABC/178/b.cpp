#include<iostream>
using namespace std;

int main() {
    long long int a, b, c, d; cin >> a >> b >> c >> d;
    long long int ans = a * c;
    ans = max(ans, a * d);
    ans = max(ans, b * c);
    ans = max(ans, b * d);
    cout << ans << endl;
}
