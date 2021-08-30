#include<iostream>
using namespace std;

int main() {
    int X, Y;
    scanf("%d.%d", &X, &Y);
    string ans = to_string(X);
    if (Y <= 2) {
        ans += "-";
    } else if (7 <= Y and Y <= 9) {
        ans += "+";
    }
    cout << ans << endl;
}
