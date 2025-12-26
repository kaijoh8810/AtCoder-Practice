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
    vector<int> a(n+1);
    rep(i,n+1) cin >> a[i];
    vector<int> b(n);
    rep(i,n) cin >> b[i];

    ll ans = 0;
    rep(i,n){
        int kill_left = min(a[i],b[i]);
        ans+=kill_left;
        b[i] -=kill_left;

        if(b[i]>0){
            int kill_right = min(a[i+1],b[i]);

            ans+=kill_right;
            a[i+1]-=kill_right;
            
        }
    }
    cout << ans << endl;
    return 0;
}