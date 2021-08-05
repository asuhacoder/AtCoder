#include<iostream>
#include<math.h>
using namespace std;

int main() {
    string X; cin >> X;
    string ans = X.substr(0, X.find("."));
    cout << ans << endl;
}
