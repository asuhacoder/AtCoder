#include<iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    for (int i = 0; i <= 255; i++) {
        if ((A ^ i) == B) {
            cout << i << endl;
            break;
        }
    }
}
