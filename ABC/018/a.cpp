#include<iostream>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;
    int arr[] = {A, B, C, A, B};
    for (int i = 0; i < 3; i++) {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i + 2]) {
            cout << '1' << endl;
        } else if (arr[i] > arr[i + 1] || arr[i] > arr[i + 2]) {
            cout << '2' << endl;
        } else {
            cout << '3' << endl;
        }
    }
}
