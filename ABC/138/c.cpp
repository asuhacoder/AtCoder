#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    double v[N];
    for (int i = 0; i < N; i++) {
        cin>>v[i];
    }
    sort(v, v + N);
    for (int i = 1; i < N; i++) {
        v[i] = (v[i] + v[i - 1]) / 2;
    }
    cout << v[N - 1] << endl;
}
