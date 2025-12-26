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
    vector<int> a(n);
    int even_count = 0;
    rep(i,n){
        cin >> a[i];
        if(a[i]%2==0){
            even_count++;
        }
    }

    ll total_ways = pow(3,n);
    ll odd_ways = pow(2,even_count);

    cout << total_ways-odd_ways<<endl;
    return 0;
}