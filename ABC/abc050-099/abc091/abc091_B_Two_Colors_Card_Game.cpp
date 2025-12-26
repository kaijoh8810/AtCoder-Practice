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
    map<string,int> score;
    rep(i,n){
        string s;
        cin >> s;
        score[s]++;
    }
    int m;
    cin >> m;
    rep(i,m){
        string t;
        cin >> t;
        score[t]--;
    }
    int ans = 0;
    for(auto p:score){
        ans = max(ans,p.second);
    }
    cout << ans << endl;
    return 0;
}