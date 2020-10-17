#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long N; cin >> N;
    vector<long int> vec;
    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }
    for (long long int i = 1; i <= N / 2; i++) {
        if (i * i > N) {
            break;
        }
        if (i * i == N) {
            cout << i << endl;
            break;
        }
        if (N % i == 0) {
            vec.push_back(N / i);
            cout << i << endl;
        }
    }
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
