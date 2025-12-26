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
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    int ans = 0;
    int curr = 0;

    rep(i,n-1){
        if(h[i]>=h[i+1]){
            curr++;
        }
        else{
            ans = max(ans, curr);
            curr = 0;
        }
    }
    cout << max(ans,curr) << endl;
    return 0;
    
}