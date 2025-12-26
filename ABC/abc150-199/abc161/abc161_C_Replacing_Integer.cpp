#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin >> n >> k;
    ll cnt = n/k;
    n = n-k*cnt;
    cout << (abs(n-k)<n ? abs(n-k) : n) << endl;
}