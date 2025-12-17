#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> s;
    
    bool ok = false;
    for(int mask = 0; mask <(1<<n); mask++){
        vector<int> s;
        rep(i,n){
            if(mask & (1<<i)){
                s.push_back(i);
            }
            int sum = 0;
            for(int i : s) sum+=a[i];

            if(sum==w) ok = true;
        }
    }
    cout << (ok ? "Yes" : "No") << endl; 
}