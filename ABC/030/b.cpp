#include<iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    double h_deg = 30 * (n % 12) + 0.5 * m;
    double m_deg = 6 * m;
    cout << min(abs(h_deg - m_deg), 360 - abs(h_deg - m_deg)) << endl;
}
