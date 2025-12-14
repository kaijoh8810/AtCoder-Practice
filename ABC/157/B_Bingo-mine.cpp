#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> a(3),b(3),c(3);
    rep(i, 3) cin >> a[i];
    rep(i, 3) cin >> b[i];
    rep(i, 3) cin >> c[i];
    
    int n;
    cin >> n;
    vector<string> v(n);
    rep(i,n) cin >> v[i];
    
    rep(i,3){
      rep(j,n){
        if(a[i]==v[j]){
          a[i]='o';
        } 
        else if(b[i]==v[j]){
          b[i]='o';
        }
        else if(c[i]==v[j]){
          c[i]='o';
        }
      }
    }
    if(a[0]==a[1]&&a[1]==a[2]||b[0]==b[1]&&b[1]==b[2]||c[0]==c[1]&&c[1]==c[2]||
        a[0]==b[0]&&b[0]==c[0]||a[1]==b[1]&&b[1]==c[1]||a[2]==b[2]&&b[2]==c[2]||
        a[0]==b[1]&&b[1]==c[2]||c[0]==b[1]&&b[1]==a[2]){
      cout << "Yes" << endl;
        }
    else cout << "No" << endl;
}