#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int A, B, H, M; cin >> A >> B >> H >> M;
    double pi = 3.141592653589793238462643383279;
    double deg_hour = pi * (H * 60 + M)/ 360;
    double deg_minute = M / 30.0 * pi;
    // cout << "deg_hour: " << deg_hour / pi * 180 << " deg_minute: " << deg_minute / pi * 180 << endl;
    double hour_x = A * sin(deg_hour);
    double hour_y = A * cos(deg_hour);
    // cout << "hour_x: " << hour_x << " hour_y: " << hour_y << endl;
    double minute_x = B * sin(deg_minute);
    double minute_y = B * cos(deg_minute);
    // cout << "minute_x: " << minute_x << " minute_y: " << minute_y << endl;
    cout << fixed << setprecision(20) << sqrt(pow(abs(hour_x - minute_x), 2) + pow(abs(hour_y - minute_y), 2)) << endl;
}
