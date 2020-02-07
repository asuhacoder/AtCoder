#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], MIN = 101;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        MIN = min(MIN, a[i]);
    }
    cout << MIN << endl;
}
