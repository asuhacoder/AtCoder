#include<iostream>
#include<set>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    set<int>st{a, b, c};
    cout << st.size() << endl;
}
