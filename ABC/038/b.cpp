#include<iostream>
using namespace std;

int main() {
    int H1, W1; cin >> H1 >> W1;
    int H2, W2; cin >> H2 >> W2;
    if (H1 == H2) {
        cout << "YES" << endl;
    } else if (H1 == W2) {
        cout << "YES" << endl;
    } else if (W1 == H2) {
        cout << "YES" << endl;
    } else if (W1 == W2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
