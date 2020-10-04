#include<iostream>
#include<set>
using namespace std;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    set<string>st;
    if (k > s.size()) {
        cout << 0 << endl;
        return 0;
    } else {
        for (int i = 0; i < s.size() - k + 1; i++) {
            st.insert(s.substr(i, k));
        }
    }
    cout << st.size() << endl;
}
