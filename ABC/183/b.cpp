#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;
    sy *= -1;
    double num = (gy - sy) / (gx - sx);
    cout << fixed << setprecision(15) << sx + abs(sy) / num << endl;
}
