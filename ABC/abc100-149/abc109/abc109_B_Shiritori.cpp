#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> w(n);
    rep(i,n) cin >> w[i];

    bool ok = true;

    set<string> seen;
    
    rep(i,n){
        if(seen.count(w[i])){
            ok = false;
        }
        seen.insert(w[i]);

        if(i > 0){
            char last = w[i-1].back();
            char first = w[i].front();
            if(last != first) ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
