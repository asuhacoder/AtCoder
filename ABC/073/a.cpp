#include<iostream>
using namespace std;

int main() {
    bool isIncluded9 = false;
    for (int i = 0; i < 2; i++) {
        char n; cin >> n;
        if (n == '9') {
            isIncluded9 = true;
        }
    }
    if (isIncluded9) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
