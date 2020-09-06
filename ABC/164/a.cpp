#include<iostream>
using namespace std;

int main(void) {
    int S, W; cin >> S >> W;
    if (S <= W) {
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
}
