#include<iostream>
using namespace std;

int main() {
    string S; cin >> S;
    int ans[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < S.size(); i++) {
        ans[S[i] - 'A']++;
    }
    printf("%d %d %d %d %d %d\n", ans[0], ans[1], ans[2], ans[3], ans[4], ans[5]);
}
