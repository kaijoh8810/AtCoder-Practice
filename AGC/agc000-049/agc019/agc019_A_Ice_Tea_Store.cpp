#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q,h,s,d;
    cin >> q >> h >> s >> d;
    ll n;
    cin >> n;

    ll min_1l = min({4*q,2*h,s});
    if(min_1l*2<=d){
        cout << n*min_1l<<"\n";
    } else{
        ll val = (n/2)*d;
    if(n%2==1){
        val+=min_1l;
    }
    cout << val << endl;
    }
}