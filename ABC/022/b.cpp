#include<iostream>
#include<map>
using namespace std;

int main() {
    int N; cin >> N;
    int A[N];
    int ans = 0;
    map<int, int> record;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if (record[A[i]] == 1) {
            ans++;
        }
        record[A[i]] = 1;
    }
    cout << ans << endl;
}
