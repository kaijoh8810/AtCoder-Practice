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
    int max_l = 1;
    int min_r = n;

    rep(i,m){
        int l,r;
        cin >> l >> r;
        max_l = max(max_l,l);
        min_r = min(min_r,r);
    }
    int ans = max(0,min_r-max_l+1);
    cout << ans << endl;
    return 0;
}