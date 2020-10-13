#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    char cells[H][W];
    for (int i = 0; i < H; i++) {
        string input;
        cin >> input;
        strcpy(cells[i], input.c_str());
    }
    for (int i = 0; i < W; i++) {
        bool should_break = true;
        for (int j = 0;j < H; j++) {
            if (cells[j][i] == '#') {
                should_break = false;
                break;
            }
        }
        if (should_break) {
            for (int j = 0; j < H; j++) {
                cells[j][i] = '0';
            }
        }
    }
    for (int i = 0; i < H; i++) {
        bool should_break = true;
        for (int j = 0;j < W; j++) {
            if (cells[i][j] == '#') {
                should_break = false;
                break;
            }
        }
        if (should_break) {
            for (int j = 0; j < W; j++) {
                cells[i][j] = '0';
            }
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (cells[i][j] != '0') {
                cout << cells[i][j];
            }
        }
        for (int j = 0; j < W; j++) {
            if (cells[i][j] != '0') {
                cout << endl;
                break;
            }
        }
    }
}
