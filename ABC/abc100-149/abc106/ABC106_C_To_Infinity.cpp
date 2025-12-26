#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    ll k;
    cin >> s >> k;
    rep(i,s.size()){
        if(i>=k){
            cout << 1 << endl;
            return 0;
        }
        if(s[i]!='1'){
            cout << s[i]<< endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
    
}