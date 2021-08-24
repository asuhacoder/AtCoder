#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> vec;
    for (int i = 0; i < N; i++) {
        int A; cin >> A;
        vec.push_back(make_pair(A, i));
    }
    sort(vec.begin(), vec.end());
    cout << vec[N - 2].second + 1<< endl;
}
