#include<iostream>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;
    cout << max(A + B, max(A + C, B + C)) << endl;
}
