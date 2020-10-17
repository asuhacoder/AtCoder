#include<iostream>
using namespace std;

int dfs(int params[4], int i, int arr[4], int sum) {
    // cout << "i: " << i << endl;
    // cout << "params[0]: " << params[0] << endl << endl;
    if (i == 4) {
        if (sum == 7) {
            cout << params[0];
            for (int x = 1; x < 4; x++) {
                if (arr[x]) {
                    cout << '+';
                } else {
                    cout << '-';
                }
                cout << params[x];
            }
            cout << "=7" << endl;
            exit(0);
        }
        return 0;
    }
    arr[i] = 1;
    dfs(params, i + 1, arr, sum + params[i]);
    arr[i] = 0;
    dfs(params, i + 1, arr, sum - params[i]);
    return 0;
}

int main() {
    string num; cin >> num;
    int A = num[0] - '0';
    int B = num[1] - '0';
    int C = num[2] - '0';
    int D = num[3] - '0';
    int params[4] = {A, B, C, D};
    int arr[4];
    dfs(params, 1, arr, A);
}
