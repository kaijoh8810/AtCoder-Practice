#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n;
    cin >> k >> n;
    vector<int> v(k);
    rep(i,n) cin >> v[i];
    int max_kyori = -1;
    for(int i = 0; i<=n; i++){
        int kyori;
        kyori = v[i+1]-v[i];
        if(i == n-1){
            kyori = k-v[i]+v[0];
        }
        max_kyori = max(max_kyori, kyori);
        }
    cout << k-max_kyori << endl;
}