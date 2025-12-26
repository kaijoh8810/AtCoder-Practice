#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,l;
    cin >> n >> l;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    sort(all(s));
    rep(i,n){
        cout << s[i];
    }
    cout << "\n";
    
}