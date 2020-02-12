#include<iostream>
using namespace std;

int main() {
    string X; cin >> X;
    bool isChokugo = true;
    bool haveC = false;
    for (int i = 0; i < X.size(); i++) {
        if (isChokugo) {
            if(haveC) {
                haveC = false;
                if(X[i] == 'h') {
                    continue;
                } else {
                    isChokugo = false;
                }
            } else if (X[i] == 'c') {
                haveC = true;
            } else if (X[i] == 'o' || X[i] == 'k' || X[i] == 'u') {
                continue;
            } else {
                isChokugo = false;
            }
        } else {
            break;
        }
    }
    if(isChokugo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
