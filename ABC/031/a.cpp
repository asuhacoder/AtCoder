#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int A, D; cin >> A >> D;
    cout << max((A + 1) * D, A * (D + 1)) << endl;
}
