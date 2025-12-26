#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll ans = n-1;
    for(ll i = 1; i*i<=n; i++){
        if(n%i==0){
            ll j = n/i;
            ll cost = i+j-2;
            ans = min(ans,cost);
        }
    }
    cout << ans << endl;
}