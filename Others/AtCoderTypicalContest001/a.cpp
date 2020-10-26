#include<iostream>
#include<vector>
using namespace std;

int H, W;

void dfs(string* field, int y, int x) {
    field[y][x] = '#';
    vector<pair<int, int>> vec;
    vec.push_back(make_pair(-1, 0));
    vec.push_back(make_pair(1, 0));
    vec.push_back(make_pair(0, -1));
    vec.push_back(make_pair(0, 1));
    for (int i = 0; i < 4; i++) {
        int dx = vec[i].first;
        int dy = vec[i].second;
        if (x + dx >= 0 and x + dx < W and y + dy >= 0 and y + dy < H) {
            // cout << "x: " << x << " dx: " << dx << endl;
            // cout << "y: " << y << " dy: " << dy << endl;
            // cout << field[y + dy][x + dx] << endl;
            if (field[y + dy][x + dx] == '.') {
                dfs(field, y + dy, x + dx);
            } else if (field[y + dy][x + dx] == 'g') {
                cout << "Yes" << endl;
                exit(0);
            }
            // cout << dy << dx << endl;
        }
    }
}

int main() {
    cin >> H >> W;
    string field[H];
    for (int i = 0; i < H; i++) {
        cin >> field[i];
    }
    pair<int, int> s_cord;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (field[i][j] == 's') {
                s_cord = make_pair(i, j);
            }
        }
    }
    dfs(field, s_cord.first, s_cord.second);
    cout << "No" << endl;
}
