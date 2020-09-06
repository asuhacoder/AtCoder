#include<iostream>
using namespace std;

int main() {
    char alpha; cin >> alpha;
    if (alpha >= 'A' && alpha <= 'Z') {
        cout << 'A' << endl;
    } else {
        cout << 'a' << endl;
    }
}
