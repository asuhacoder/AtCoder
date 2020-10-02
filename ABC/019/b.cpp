#include<iostream>
using namespace std;

int main() {
    string s; cin >> s;
    char temp = s[0];
    int counter = 1;
    for (int i = 1; i <= s.size(); i++) {
        if (temp == s[i]) {
            counter++;
        } else {
            cout << temp << counter;
            if (i != s.size()) {
                temp = s[i];
            }
            counter = 1;
        }
    }
    cout << endl;
}
