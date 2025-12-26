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
    vector<int> t(n);
    int total_sum = 0;

    rep(i,n){
        cin >> t[i];
        total_sum += t[i];
    }
    int m;
    cin >> m;
    rep(i,m){
        int p,x;
        cin >> p >> x;
        p--;

        int ans = total_sum-t[p]+x;
        cout << ans << endl;
    }
    return 0;
}