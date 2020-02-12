#include<iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        while (l < r) {
            swap(s[l], s[r]);
            l++, r--;
        }
    }
    cout << s << endl;
}
