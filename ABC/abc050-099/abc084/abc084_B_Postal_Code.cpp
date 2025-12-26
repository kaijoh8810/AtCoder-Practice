#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    string s;
    cin >> a >> b >> s;

    bool ok = true;

    if(s[a]!='-'){
        ok = false;
    }
    rep(i,a+b){
        if(i == a) continue;
        if(!isdigit(s[i])){
            ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    
}