#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int A[N];
    int max_value = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        max_value = max(max_value, A[i]);
    }
    int ans = 0;
    int temp = 0;
    for (int i = 2; i <= max_value; i++) {
        int counter = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] % i == 0) {
                counter++;
            }
        }
        if (counter > temp) {
            ans = i;
            temp = counter;
        }
    }
    cout << ans << endl;
}
