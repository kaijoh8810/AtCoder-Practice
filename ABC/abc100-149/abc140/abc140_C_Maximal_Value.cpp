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
    vector<int> b(n-1);
    rep(i,n-1) cin >> b[i];

    int ans = 0;
    ans+=b[0];
    rep(i,n-2){
        ans += min(b[i],b[i+1]);
    }
    ans+=b[n-2];

    cout << ans << endl;
    return 0;
}