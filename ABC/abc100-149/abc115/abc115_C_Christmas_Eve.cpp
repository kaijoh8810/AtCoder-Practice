#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int>h(n);
    rep(i,n){
        cin >> h[i];
    }
    sort(all(h));
    int ans = 2e9;
    for(int i = 0; i<=n-k; i++){
        int diff=h[i+k-1]-h[i];
        ans = min(ans,diff);
    }
    cout << ans << endl;
}