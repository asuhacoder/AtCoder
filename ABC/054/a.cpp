#include<iostream>
using namespace std;

int main() {
    int a[] = {12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int A, B; cin >> A >> B;
    if (a[A - 1] < a[B - 1]) {
        cout << "Bob" << endl;
    } else if (a[A - 1] > a[B - 1]) {
        cout << "Alice" << endl;
    } else {
        cout << "Draw" << endl;
    }
}
