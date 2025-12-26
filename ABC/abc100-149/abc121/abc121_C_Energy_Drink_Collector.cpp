#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<pair<ll,int>> shops(n);
    rep(i,n){
        cin >> shops[i].first >> shops[i].second;
    }
    sort(all(shops));

    ll total_cost = 0;
    rep(i,n){
        ll price = shops[i].first;
        int stock = shops[i].second;

        if(m>stock){
            total_cost+=price*stock;
            m-=stock;
        }else{
            total_cost+=price*m;
            m=0;
            break;
        }
    }
    cout << total_cost<<"\n";
    return 0;
}