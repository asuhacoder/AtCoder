#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int X, N; cin >> X >> N;
    vector<int> p;
    if (N == 0) {
        string line;
        getline(cin, line);
        getline(cin, line);
        cout << X << endl;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        p.push_back(input);
    }
    sort(p.begin(), p.end());
    int ans;
    int temp = 101;
    for (int i = 0; i <= 101; i++) {
        if (p.empty()) {
            if (temp > abs(i - X)) {
                ans = i;
                temp = abs(i - X);
            }
        }
        if (i == p[0]) {
            p.erase(p.begin());
            continue;
        } else {
            if (temp > abs(i - X)) {
                ans = i;
                temp = abs(i - X);
            }
        }
    }
    cout << ans << endl;
}
