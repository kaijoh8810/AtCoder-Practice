#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n+1,0);
    rep(i,n){
        if(s[i]=='<'){
            a[i+1]=max(a[i+1],a[i]+1);
        }
    }
    for(int i = n-1;i>=0; i--){
        if(s[i]=='>'){
            a[i]=max(a[i],a[i+1]+1);
        }
    }

    ll ans=0;
    rep(i,n+1){
        ans+=a[i];
    }
    cout << ans << "\n";
    return 0;
}