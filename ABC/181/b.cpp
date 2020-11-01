#include<iostream>
using namespace std;

long long int calc(long long int A, long long int B) {
    if ((B - A) % 2 == 1) {
        return (A + B) * ((B - A + 1) / 2);
    } else {
        return (A + B) * ((B - A) / 2) + (A + B) / 2;
    }
}

int main() {
    long long int N; cin >> N;
    long long int sum = 0;
    for (long long int i = 0; i < N; i++) {
        long long int A, B; cin >> A >> B;
        sum += calc(A, B);
    }
    cout << sum << endl;
}
