#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<bool>> appeared(3, vector<bool>(3, false));

    vector<pair<int, int>> pos(101, {-1, -1});

    rep(i, 3) {
        rep(j, 3) {
            int val;
            cin >> val;
            pos[val] = {i, j};
        }
    }

    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n) cin >> b[i];

    rep(k, n) {
        int target = b[k];

        if (pos[target].first != -1) {
            int i = pos[target].first;
            int j = pos[target].second;
            
            appeared[i][j] = true;
        }
    }
    string ans = "No";

    rep(i, 3) {
        if (appeared[i][0] && appeared[i][1] && appeared[i][2]) ans = "Yes";
    }
    rep(j, 3) {
        if (appeared[0][j] && appeared[1][j] && appeared[2][j]) ans = "Yes";
    }
    if (appeared[0][0] && appeared[1][1] && appeared[2][2]) ans = "Yes";
    if (appeared[0][2] && appeared[1][1] && appeared[2][0]) ans = "Yes";

    cout << ans << endl;
}