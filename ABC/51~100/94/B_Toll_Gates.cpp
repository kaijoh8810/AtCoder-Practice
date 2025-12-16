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
    vector<int> a(n);
    rep(i,m) cin >> a[i];
    int cnt_0 = 0;
    int cnt_n = 0;
    rep(i,m){
        if(a[i]>x) cnt_n++;
        else if(a[i]<x) cnt_0++;
    }
    cout << min(cnt_0,cnt_n) << endl;
}