#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,a,b;
    cin >> n >> a >> b;

    if((b-a)%2==0){
        cout << (b-a)/2<<"\n";
    }
    else{
        ll ans1 = (a+b-1)/2;
        ll ans2 = (2*n-a-b+1)/2;
        cout << min(ans1, ans2) << "\n";
    }
    return 0;
}