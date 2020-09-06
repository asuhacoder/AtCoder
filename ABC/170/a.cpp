#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        int x; cin >> x;
        if (x != i) {
            cout << i << endl;
        }
    }
}
