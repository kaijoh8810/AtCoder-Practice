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
    vector<ll> a(3*n);
    rep(i,3*n){
        cin>>a[i];
    }

    sort(all(a), greater<ll>());

    ll ans = 0;

    rep(i,n){
        ans+=a[2*i+1];
    }
    cout << ans << endl;
    return 0;
}