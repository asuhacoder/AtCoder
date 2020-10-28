#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    vector<vector<int>> vec;
    for (int i = 0; i < N; i++) {
        vec.push_back({});
    }
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        A -= 1;
        B -= 1;
        vec[A].push_back(B);
        vec[B].push_back(A);
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            // cout << " vec" << i << j << " " << vec[i][j] + 1;
        }
        // cout << endl;
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int height = H[i];
        bool is_good = true;
        for (int j = 0; j < vec[i].size(); j++) {
            if (H[vec[i][j]] >= height) {
                is_good = false;
            }
        }
        if (is_good) {
            // cout << i + 1 << endl;
            ans++;
        }
    }
    cout << ans << endl;
}
