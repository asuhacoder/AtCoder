#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    double L; cin >> L;
    double D = L / 3;
    cout << fixed << setprecision(20) << pow(D, 3) << endl;
}
