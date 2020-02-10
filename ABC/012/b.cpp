#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N; cin >> N;
    cout << setfill('0') << right << setw(2) << N / 3600 << ':';
    cout << setfill('0') << right << setw(2) << N / 60 % 60 << ':';
    cout << setfill('0') << right << setw(2) << N % 60 << endl;
}
