#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,d,x;
    cin >> n;
    cin >> d >> x;
    vector<int> a(n);
    rep(i,n) cin >>a[i]; 
    sort(all(a));
    int cnt=0;
    rep(i,n){
        rep(j,d/a[0]+1){
            int tmp = d;
            if(tmp>=a[i]*j+1){
            cnt++;
            }
        }
    }
    cout << x+cnt << endl;
}