#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                int total = 500*i+100*j+50*k;
                if(total==x){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}