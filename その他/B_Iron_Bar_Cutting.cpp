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
    vector<ll> a(n);
    ll total_sum = 0;
    rep(i,n){
        cin >> a[i];
        total_sum += a[i];
    }
    ll ans = 202020202020202020LL;
    ll left_sum = 0;
    rep(i,n-1){
        left_sum += a[i];
        ll right_sum = total_sum - left_sum;
        ll diff = abs(left_sum-right_sum);
        ans = min(ans,diff);
    }
    cout << ans << endl;
    return 0;
}