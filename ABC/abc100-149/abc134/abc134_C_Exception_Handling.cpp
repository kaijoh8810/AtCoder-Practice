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
    rep(i,n) cin >> a[i];

    vector<int> b = a;
    sort(all(b),greater<int>());
    int max1 = b[0];
    int max2 = b[1];

    rep(i,n){
        if(a[i]==max1){
            cout << max2 << endl;
        }
        else{
            cout << max1 << endl;
        }
    }
}