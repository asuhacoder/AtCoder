#include<iostream>
using namespace std;

int main() {
    int N, D; cin >> N >> D;
    int watchable_tree = D * 2 + 1;
    cout << (N + watchable_tree - 1) / watchable_tree << endl;
}
