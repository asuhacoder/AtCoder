#include<iostream>
using namespace std;

int main() {
    char s;
    int counter5 = 0, counter7 = 0;
    for (int i = 0; i < 3; i++) {
        cin >> s;
        if (s == '5') {
            counter5++;
        } else if (s == '7') {
            counter7++;
        }
    }
    if (counter5 == 2 && counter7 == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
