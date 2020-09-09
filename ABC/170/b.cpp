#include<iostream>
using namespace std;

int main() {
    int X, Y; cin >> X >> Y;
    bool exist_ans = false;
    for (int i = 0; i <= X; i++) {
        if (i * 2 + (X - i) * 4 == Y) {
            exist_ans = true;
        }
    }
    if (exist_ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
