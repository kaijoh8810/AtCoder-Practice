#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll h;
    cin >> h;

    ll ans = 0;
    ll count = 1;

    while(h > 0){
        ans += count;
        h /= 2;
        count*= 2;
    }

    cout << ans << endl;
    return 0;
    
}