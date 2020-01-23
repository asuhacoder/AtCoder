#include<iostream>
using namespace std;

int main() {
    char num;
    for (int i = 0; i < 3; i++) {
        cin >> num;
        if (num == '1') {
            cout << '9';
        } else {
            cout << '1';
        }
    }
    cout << endl;
    return 0;
}
