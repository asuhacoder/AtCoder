#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N, greater<int>());
    for (int i = 1; i < N; i++) {
        ans += arr[i - 1] - arr[i];
    }
    cout << ans << endl;
}
