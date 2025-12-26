#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,x;
    cin >> n >> m >> x;
    vector<vector<int>> v(n,vector<int>(m));
    rep(i,n){
        rep(j,m){
            cin >> v.at[i].at[j];
        }
        
    }

}