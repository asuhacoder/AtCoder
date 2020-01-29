#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    cout << min(abs(n - x), x - 1) << endl;
}
