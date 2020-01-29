#include<iostream>
using namespace std;

int main() {
    int a, b, n, counter = 0; cin >> a >> b >> n;
    while (true) {
        if (counter >= n && counter % a == 0 && counter % b == 0) {
            cout << counter << endl;
            break;
        }
        counter++;
    }
}
