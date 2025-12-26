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
    vector<ll> a(n),s(n),t(n);
    rep(i,n) cin >> a[i];
    rep(i,n-1) cin >> s[i] >> t[i];
    rep(i,n-1){
        ll count = a[i] / s[i];
        a[i+1] += count * t[i]; 
    }
    cout << a[n-1] << endl;
}