#include<iostream>
#include<set>
using namespace std;

int main() {
    int N; cin >> N;
    set<int> s;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        s.insert(A);
    }
    if (N == s.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
