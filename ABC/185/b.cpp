#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M, T; cin >> N >> M >> T;
    int time = 0;
    int battery = N;
    bool nobattery = false;
    vector<pair<int, int>> vec;
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        vec.push_back(make_pair(A, B));
        battery -= A - time;
        if (battery <= 0) {
            nobattery = true;
            break;
        }
        battery = min(battery + B - A, N);
        time = B;
    }
    battery -= T - time;
    if (nobattery or battery <= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
