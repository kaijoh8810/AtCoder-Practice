#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<bool> seen(26, false);
    rep(i,s.size()){
        seen[s[i]-'a'] = true;
    }
    rep(i,26){
        if(!seen[i]){
            cout << (char)('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}