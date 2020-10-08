#include<iostream>
#include<map>
using namespace std;

int main() {
    map<char, string> S;
    string temp1;
    cin >> temp1;
    S.insert(make_pair('A', temp1));
    cin >> temp1;
    S.insert(make_pair('B', temp1));
    cin >> temp1;
    S.insert(make_pair('C', temp1));
    char next_person = 'A';
    char temp2;
    while(1) {
        if (S[next_person] == "") {
            cout << S.find(next_person)->first << endl;
            break;
        }
        temp2 = S[next_person][0];
        S[next_person] = S[next_person].substr(1, S[next_person].size() - 1);
        next_person = temp2 - 32;
    }
}

