#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> vec;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        vec.push_back(make_pair(A, i + 1));
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < N; i++) {
        cout << vec[i].second;
        if (i == N - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
