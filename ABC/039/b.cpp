#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int X; cin >> X;
    for (long long int i = 1; i < 1000000000; i++) {
        if (pow(i, 4) == X) {
            cout << i << endl;
            break;
        }
    }
}
