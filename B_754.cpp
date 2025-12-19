#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int ans = 10000;
    int target = 753;

    rep(i,s.size()-2){
        string sub = s.substr(i,3);
        int num = stoi(sub);

        int diff = abs(num - target);
        ans = min(ans, diff);
    }
    cout << ans << endl;
    return 0;
}