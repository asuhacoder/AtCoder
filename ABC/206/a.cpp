#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int N; cin >> N;
    int price = floor(1.08 * N);
    if (price < 206) {
        cout << "Yay!" << endl;
    } else if(price == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
}
