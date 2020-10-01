#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<tuple<string, int, int>> review;
    for (int i = 0; i < N; i++) {
        string S; cin >> S;
        int P; cin >> P;
        review.push_back(make_tuple(S, -1 * P, i + 1));
    }
    sort(review.begin(), review.end());
    for (int i = 0; i < N; i++) {
        cout << get<2>(review[i]) << endl;
    }
}
