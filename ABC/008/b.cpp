#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string s[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    int ans_array[N] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            if (s[i] == s[j]) {
                ans_array[i] += 1;
            }
        }
    }
    int MAX = 0;
    string ans;
    for (int i = 0; i < N; i++) {
        if (MAX < ans_array[i]) {
            MAX = max(MAX, ans_array[i]);
            ans = s[i];
        }
    }
    cout << ans << endl;
}
