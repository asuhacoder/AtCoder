#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string N; cin >> N;
    int counter1 = 0;
    int counter2 = 0;
    for (int i = N.size() - 1; i >= 0; i--) {
        if (N[i] == '0') {
            counter1++;
        } else {
            break;
        }
    }
    for (int i = 0; i < N.size(); i++) {
        if (N[i] == '0') {
            counter2++;
        } else {
            break;
        }
    }
    if (counter1 < counter2) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < counter1 - counter2; i++) {
        N = '0' + N;
    }
    string tmp = N;
    reverse(N.begin(), N.end());
    if (N == tmp) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
