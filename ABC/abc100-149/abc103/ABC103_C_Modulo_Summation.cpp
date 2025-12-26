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
    ll ans = 0;
    rep(i,n){
        int a;
        cin >> a;
        ans+=a-1;
    }
    cout << ans << endl;
    return 0;
}