#include<iostream>
using namespace std;

int main() {
    long long int A, B, C; cin >> A >> B >> C;
    const long long int big_prime = 1000000007;
    A %= big_prime;
    B %= big_prime;
    C %= big_prime;
    cout << A * B % big_prime * C % big_prime << endl;
}
