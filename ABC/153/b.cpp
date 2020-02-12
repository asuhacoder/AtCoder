#include<iostream>
using namespace std;

int main() {
    int H, N; cin >> H >> N;
    int a, sum_damage = 0;
    for (int i = 0; i < N; i++) {
        cin >> a;
        sum_damage += a;
    }
    if (H <= sum_damage) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

