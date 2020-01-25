#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cout << min(A, B) + min(C, D) << endl;
}