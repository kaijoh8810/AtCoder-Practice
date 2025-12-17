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
    vector<vector<pair<int,int>>> testimony(n);
    rep(i,n){
        int a;
        rep(j,a){
            int x,y;
            cin >> x >> y;
            x--;
            testimony[i].push_back({x,y});
        }
    }
    int ans = 0;
    for(int mask = 0; mask<(1 << n); mask++){
        bool ok = true;
        rep(i,n){
            if(mask & (1 << i)){
                for(auto p:testimony[i]){
                    int target = p.first;
                    int type = p.second;
                    int real_status = (mask >> target) & 1;
                    if(type != real_status){
                        ok = false;
                        break;
                    }
                }
            }
            if(!ok) break;
        }
        if(ok){
            int count = __builtin_popcount(mask);
            ans = max(ans,count);
        }
    }
    cout << ans << endl;
}