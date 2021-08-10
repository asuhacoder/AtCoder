#include<iostream>
using namespace std;

int main() {
    long long int N, K; cin >> N >> K;
    for (int i = 0; i < K; i++) {
        if (N % 200 == 0) {
            N /= 200;
        } else {
            N = stoll(to_string(N) + "200");
        }
    }
    cout << N << endl;
}
