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
    vector<vector<int>> a(2,vector<int>(n));
    rep(i,2){
        rep(j,n){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    rep(i,n){
        int sum = 0;
        rep(j,i+1){
            sum+=a[0][j];
        }
        for(int j = i; j<n; j++){
            sum+=a[1][j];
        }
        ans = max(ans,sum);
    }
    cout << ans << endl;
    return 0;
}