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
    vector<int> cnt(m+1,0);

    rep(i,n){
        int k;
        cin >> k;
        rep(j,k){
            int a;
            cin >> a;
            cnt[a]++;
        }
    }
    int ans = 0;
    for(int i = 1; i<=m; i++){
        if(cnt[i]==n){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}