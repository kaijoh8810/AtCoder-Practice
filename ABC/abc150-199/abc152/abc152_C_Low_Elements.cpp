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
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int ans = 0;
    int min_val = 1001001001;

    rep(i,n){
        if(p[i]<=min_val){
            ans++;
            min_val = p[i];
        }
    }
    cout << ans << endl;
}