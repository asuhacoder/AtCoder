#include<iostream>
#include<vector>
using namespace std;

vector<long long int> dfs(long long int i, string S, vector<long long int> vec, vector<long long int> vec_ans) {
    if (S.size() == 1) {
        vec_ans.push_back(S[0] - '0');
        return vec_ans;
    }
    if (i == S.size() - 1) {
        long long int sum = 0;
        long long int temp = 0;
        string S_ans = "";
        for (int j = 0; j < S.size(); j++) {
            S_ans += S[j];
            if (vec[j]) {
                S_ans += '+';
            }
        }
        for (int j = 0; j < S_ans.size(); j++) {
            if (S_ans[j] == '+') {
                sum += temp;
                temp = 0;
            } else {
                temp = temp * 10 + S_ans[j] - '0';
            }
        }
        sum += temp;
        // cout << "S_ans: " << S_ans << endl;
        vec_ans.push_back(sum);
        // cout << "sum: " << sum << endl;
        return vec_ans;
    }
    vector<long long int> vec1 = vec;
    vec1.push_back(1);
    vec_ans = dfs(i + 1, S, vec1, vec_ans);
    vector<long long int> vec2 = vec;
    vec2.push_back(0);
    vec_ans = dfs(i + 1, S, vec2, vec_ans);
    return vec_ans;
}

int main() {
    string S; cin >> S;
    long long int ans = 0;
    vector<long long int> vec;
    vector<long long int> vec_ans;
    vec_ans = dfs(0, S, vec, vec_ans);
    for (int i = 0; i < vec_ans.size(); i++) {
        ans += vec_ans[i];
    }
    cout << ans << endl;
}
