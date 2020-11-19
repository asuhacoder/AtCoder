#include<iostream>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    pair<bool, int> index[N];
    for (int i = 0; i < N; i++) {
        index[i] = make_pair(false, 0);
    }
    for (int i = 0; i < M; i++) {
        int p; cin >> p;
        bool accepted = false;
        string S; cin >> S;
        if (S == "AC") {
            accepted = true;
            index[p - 1].first = accepted;
        } else {
            if (!index[p - 1].first) {
                index[p - 1].second++;
            }
        }
    }
    int ac = 0;
    int penalty = 0;
    for (int i = 0; i < N; i++) {
        if (index[i].first) {
            ac++;
            penalty += index[i].second;
        }
    }
    cout << ac << " " << penalty << endl;
}
