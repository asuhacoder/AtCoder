#include<iostream>
using namespace std;

int main() {
    double A, B, C, D; cin >> A >> B >> C >> D;
    if (A / B < C / D) {
        cout << "TAKAHASHI" << endl;
    } else if (A / B > C / D){
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }
}
