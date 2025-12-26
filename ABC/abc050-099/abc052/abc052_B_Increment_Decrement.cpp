#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >>n >> s;
    int x = 0;
    int ans = 0;
    rep(i,n){
        if(s[i]=='I'){
            x++;
        }
        else x--;
        ans = max(ans,x);
    }
    cout << ans << endl;
}