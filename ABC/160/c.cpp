#include<iostream>
using namespace std;

int main() {
    int K, N; cin >> K >> N;
    int A[N];
    int distance[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    distance[0] = A[0] + K - A[N - 1];
    int max_value = distance[0];
    int ans = distance[0];
    for (int i = 1; i < N; i++) {
        distance[i] = A[i] - A[i - 1];
        ans += distance[i];
        max_value = max(max_value, distance[i]);
    }
    cout << ans - max_value << endl;
}
