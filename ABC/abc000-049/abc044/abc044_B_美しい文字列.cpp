#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string w;
    cin >> w;

    vector<int> cnt(26,0);
    rep(i,w.size()){
        int char_idx = w[i] - 'a';
        cnt[char_idx]++;
    }
    bool ok = true;
    rep(i,26){
        if(cnt[i] % 2 != 0){
            ok = false;
            break;
        }
    }
    cout <<(ok ? "Yes" : "No") << endl;
    return 0;
    
}