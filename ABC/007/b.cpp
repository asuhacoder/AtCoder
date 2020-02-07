#include<iostream>
using namespace std;

int main() {
    string a; cin >> a;
    if (a == "a") {
        cout << -1 << endl;
    } else if (a.size() == 1) {
        cout << char(a.c_str()[0] - 1) << endl;
    } else {
        cout << a.erase(a.size() - 1) << endl;
    }
}
