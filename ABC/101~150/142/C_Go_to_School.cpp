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
    vector<pair<int,int>> p(n);
    rep(i,n){
        cin >> p[i].first;
        p[i].second = i+1;
    }

    sort(all(p));
    rep(i,n) cout << p[i].second << " ";
    cout << endl;
}