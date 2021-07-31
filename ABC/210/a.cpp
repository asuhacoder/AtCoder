#include<iostream>
using namespace std;

int main() {
    int N, A, X, Y; cin >> N >> A >> X >> Y;
    cout << X * min(A, N) + Y * max(0, N - A) << endl;
}
