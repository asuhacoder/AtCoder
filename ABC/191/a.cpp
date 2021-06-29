#include<iostream>
using namespace std;

int main() {
    double V, T, S, D; cin >> V >> T >> S >> D;
    double timeArrival = D / V;
    if (timeArrival >= T and timeArrival <= S) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
