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

    int ans = 1;
    while (ans * 2 <= n) {
        ans *= 2;
    }

    cout << ans << endl;
    
    return 0;
}