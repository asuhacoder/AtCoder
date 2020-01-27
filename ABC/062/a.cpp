#include<iostream>
using namespace std;

int main() {
    int a[] = {0, 2, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0};
    int x, y; cin >> x >> y;
    if (a[x - 1] == a[y - 1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
