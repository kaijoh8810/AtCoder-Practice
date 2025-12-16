#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n >> x;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    sort(all(c));
    int cnt = 0;
    rep(i,n){
        if(x-c[i]>=0&&i!=n-1){
            x-=c[i];
            cnt++;
        }
        else if(i == n-1 && x-c[i]>0){
            break;
        }
        else if(i == n-1 && x-c[i]==0){
            cnt++;
            break;
        }
}
cout << cnt << endl;
}