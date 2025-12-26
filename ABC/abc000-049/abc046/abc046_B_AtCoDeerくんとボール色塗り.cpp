#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >>k;
    ll ans = k;
    rep(i,n-1){
        ans*=(k-1);
    }
    cout << ans << endl;
    return 0;
}