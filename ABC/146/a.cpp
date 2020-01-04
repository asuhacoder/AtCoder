#include<iostream>
#include<map>
using namespace std;

int main(void) {
    map<string, int> weekday{
        {"SUN", 7},
        {"MON", 6},
        {"TUE", 5},
        {"WED", 4},
        {"THU", 3},
        {"FRI", 2},
        {"SAT", 1},
    };

    string S;

    cin >> S;
    cout << weekday[S] << endl;
}
