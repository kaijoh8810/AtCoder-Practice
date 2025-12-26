#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> v(3);
    cin >> v[0]>>v[1]>>v[2];
    if(v[0]%2==0||v[1]%2==0||v[2]%2==0){
        cout << 0 << "\n";
    }else{
        sort(all(v));
        cout << v[0]*v[1]<<"\n";
    }
    return 0;
}