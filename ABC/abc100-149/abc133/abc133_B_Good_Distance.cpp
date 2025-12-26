#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,d;
    cin >> n >> d;
    vector<vector<int>> x(n,vector<int>(d));
    rep(i,n){
        rep(j,d){
            cin >> x[i][j];
        }
    }
    int ans = 0;
    rep(i,n){
        for(int j = i+1; j<n; j++){
            int norm_sq = 0;
            rep(k,d){
                int diff=x[i][k]-x[j][k];
                norm_sq += diff*diff;
            }

            int root = sqrt(norm_sq);
            if(root*root == norm_sq){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}