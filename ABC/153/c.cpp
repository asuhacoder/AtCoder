#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long long int N, K; cin >> N >> K;
    vector<int> vec;
    for (int i = 0; i < N; i++) {
        long long int H; cin >> H;
        vec.push_back(H);
    }
    sort(vec.begin(), vec.end());
    long long int ans = 0;
    for (int i = 0; i < N - K; i++) {
        ans += vec[i];
    }
    cout << ans << endl;
}
