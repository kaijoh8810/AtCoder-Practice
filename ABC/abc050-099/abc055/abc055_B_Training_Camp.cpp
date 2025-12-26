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
    const int MOD = 1000000007;
    ll ans = 1;
    rep(i,n){
        ans = (ans*(i+1))%MOD;
    }
    cout << ans << endl;
    return 0;
}