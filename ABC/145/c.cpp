#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int N; cin >> N;
    pair<int, int> pr[N];
    double ans = 0;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        pr[i] = make_pair(x, y);
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i; j < N; j++) {
            ans += sqrt(pow(pr[i].first - pr[j].first, 2) + pow(pr[i].second - pr[j].second, 2));
        }
    }
    cout << fixed << setprecision(15) << ans  * 2 / N << endl;
}
