#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,a,b;
    cin >> n >> a >> b;
    ll period_len = a+b;
    ll num_cycles = n / period_len;
    ll remainder = n%period_len;
    ll ans = num_cycles*a;

    ans+=min(remainder,a);
    cout << ans << endl;
}