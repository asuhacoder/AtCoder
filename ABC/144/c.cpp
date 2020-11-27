#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long long int N; cin >> N;
    long long int i = sqrt(N);
    for (i; i >= 1; i--) {
        if (N % i == 0) {
            cout << i - 2 + N / i << endl;
            break;
        }
    }
}
