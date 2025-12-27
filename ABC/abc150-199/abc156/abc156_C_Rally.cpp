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
    vector<int> v(n);
    rep(i,n) cin >> v[i];
    sort(all(v));
    int p=0;
    rep(i,n){
      p+=v[i];
    }
    p/=n;
    
    int ans1 = 0;
    int ans2 = 0;
    
    rep(i,n){
      ans1 += (v[i]-p)*(v[i]-p) ;
      ans2 += (v[i]-p-1)*(v[i]-p-1); 
    }
    cout << min(ans1,ans2) << endl;
}