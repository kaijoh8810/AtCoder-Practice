#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    
    bool exist = false;
    for(int mask = 0; mask < (1<<n); mask++){
        int sum = 0;
        rep(i,n){
            if(mask & (1<<i)) sum+=a[i];
        }
        if(sum == w) exist = true;
    }
    cout << (exist ? "Yes" : "No") << endl;
}