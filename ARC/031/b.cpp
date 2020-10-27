#include<iostream>
#include<vector>
using namespace std;

int area = 0;

void debug(string field[10]) {
    for (int i = 0; i < 10; i++) {
        cout << field[i] << endl;
    }
}

int dfs(int y, int x, int counter, string field[10]) {
    field[y][x] = 'x';
    vector<pair<int, int>> vec;
    vec.push_back(make_pair(-1, 0));
    vec.push_back(make_pair(1, 0));
    vec.push_back(make_pair(0, -1));
    vec.push_back(make_pair(0, 1));
    for (int i = 0; i < 4; i++) {
        int dy = vec[i].first;
        int dx = vec[i].second;
        int ny = y + dy;
        int nx = x + dx;
        if (ny >= 0 and ny < 10 and nx >= 0 and nx < 10) {
            if (field[ny][nx] == 'o') {
                // cout << "ny: " << ny << " nx: " << nx << endl;
                counter = dfs(ny, nx, counter + 1, field);
            }
        }
    }
    return counter;
}

int main() {
    string field[10];
    for (int i = 0; i < 10; i++) {
        cin >> field[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (field[i][j] == 'o') {
                area++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            string new_field[10];
            for (int k = 0; k < 10; k++) {
                new_field[k] = field[k];
            }
            if (dfs(i, j, 0, new_field) == area) {
                cout << "YES" << endl;
                return 0;
            }
            // cout << "dfs finished" << endl;
        }
    }
    cout << "NO" << endl;
}
