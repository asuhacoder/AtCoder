#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> d;
    for (int i = 0; i < N; i++) {
        int temp; cin >> temp;
        d.push_back(temp);
    }
    sort(d.begin(), d.end());
    cout << d[N / 2] - d[N / 2 - 1] << endl;
}
