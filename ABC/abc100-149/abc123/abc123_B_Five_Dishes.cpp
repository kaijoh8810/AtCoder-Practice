#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(5);
    rep(i,5) cin >> a[i];

    int sum_ceil = 0;
    int max_loss = 0;

    rep(i,5){
        int t = a[i];
        int next_10 = (t+9)/10*10;
        sum_ceil += next_10;

        int loss = next_10 - t;

        max_loss = max(max_loss, loss);
    }
    cout << sum_ceil - max_loss << endl;
    
}