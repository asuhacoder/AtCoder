#include<iostream>
#include<map>
using namespace std;

int main() {
    int N; cin >> N;
    string S[N];
    map<string, int> counter;
    pair<string, int> m;
    int max_value = 0;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        counter[S[i]]++;
        max_value = max(max_value, counter[S[i]]);
    }
    for (auto it = counter.begin(); it != counter.end(); it++) {
        if (it->second == max_value) {
            cout << it->first << endl;
        }
    }
}
