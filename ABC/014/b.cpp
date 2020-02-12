#include<iostream>
#include<sstream>
#include<bitset>
#include<climits>
#include<iomanip>
using namespace std;

int main() {
    int n, X; cin >> n >> X;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stringstream ss;
    ss << bitset<sizeof(X) * CHAR_BIT>(X);
    string s = ss.str();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(s[s.size() - i - 1] == '1') {
            ans += arr[i];
        }
    }
    cout << ans << endl;
}
