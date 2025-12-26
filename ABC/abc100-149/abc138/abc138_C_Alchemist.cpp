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
    vector<double> a(n);
    rep(i,n) cin >> a[i];
    sort(all(a));
    double ans = (a[0]+a[1])/2;
    for(int i = 2; i<n; i++){
        ans = (ans+a[i])/2;
    }
    cout << ans << endl;
}