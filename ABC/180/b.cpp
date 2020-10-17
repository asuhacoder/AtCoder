#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int N; cin >> N;
    int x[N];
    int c_dis = 0;
    double e_dis = 0;
    long long int m_dis = 0;
    for (int i = 0; i < N; i++) {
        cin >> x[i];
        m_dis += abs(x[i]);
        e_dis += pow(abs(x[i]), 2);
        c_dis = max(c_dis, abs(x[i]));
    }
    cout << m_dis << endl;
    cout << fixed << setprecision(15) << sqrt(e_dis) << endl;
    cout << c_dis << endl;
}
