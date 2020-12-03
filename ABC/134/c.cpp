#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A;
    vector<int> temp;
    for (int i = 0; i < N; i++) {
        int a; cin >> a;
        A.push_back(a);
        temp.push_back(a);
    }
    sort(temp.begin(), temp.end());

    for (int i = 0; i < N; i++) {
        if (A[i] == temp[N - 1]) {
            cout << temp[N - 2] << endl;
        } else {
            cout << temp[N - 1] << endl;
        }
    }
}
