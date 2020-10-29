#include<iostream>
#include<queue>
using namespace std;

int sy, sx;
int gy, gx;
int R, C;
const int INF = R * C;

int main() {
    cin >> R >> C;
    cin >> sy >> sx; sy--; sx--;
    cin >> gy >> gx; gy--; gx--;
    string field[R];
    int ans_field[R][C];
    for (int i = 0; i < R; i++) {
        cin >> field[i];
    }
    typedef pair<int, int> P;
    queue<P> que;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            ans_field[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    ans_field[sy][sx] = 0;
    while(que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gx and p.second == gy) {
            break;
        }
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (nx >= 0 and nx < C and ny >= 0 and ny < R) {
                if (field[ny][nx] != '#' and ans_field[ny][nx] == INF) {
                    que.push(P(nx, ny));
                    ans_field[ny][nx] = ans_field[p.second][p.first] + 1;
                }
            }
        }
    }
    cout << ans_field[gy][gx] << endl;
}
