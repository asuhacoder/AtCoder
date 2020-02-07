#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N, greater<>());
    for (int i = 0; i < N; i++) {
        if (a[0] != a[i]) {
            cout << a[i] << endl;
            break;
        }
    }
}
