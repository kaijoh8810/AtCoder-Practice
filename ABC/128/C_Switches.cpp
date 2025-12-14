#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<vector<int>> s(m);
    rep(i,m){
      int k;
      cin >> k;
      rep(j,k){
        int x;
        cin >> x;
        x--;
        s[i].push_back(x);
      }
    }
    
    vector<int> p(m);
    rep(i,m) cin >> p[i];
    
    int ans=0;
    
    for(int mask = 0; mask < (1 << n); mask++){
      bool ok = true;
      rep(i,m){
        int cnt = 0;
        for(int sw : s[i]){
          if(mask & (1 << sw)){
            cnt++;
          }
        }
        if(cnt%2!=p[i]){
          ok = false;
          break;
        }
      }
      if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}