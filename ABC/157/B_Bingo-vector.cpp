#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<vector<int>> A(3, vector<int>(3));
    vector<vector<bool>> appeared(3, vector<bool>(3, false));

    rep(i, 3) rep(j, 3) cin >> A[i][j];
    int N; cin >> N;
    rep(k, N) {
        int b; cin >> b;
        rep(i, 3) rep(j, 3) if (A[i][j] == b) appeared[i][j] = true;
    }

    int dx[] = {0, 1, 1, 1};
    int dy[] = {1, 0, 1, -1};

    string ans = "No";

    rep(i, 3) {
        rep(j, 3) {
            if (!appeared[i][j]) continue;

            rep(k, 4) {
                int count = 0;
                rep(step, 3) {
                    int ni = i + dx[k] * step;
                    int nj = j + dy[k] * step;
                    if (ni < 0 || ni >= 3 || nj < 0 || nj >= 3) {
                        break;
                    }               
                    if (appeared[ni][nj]) {
                        count++;
                    } else {
                        break; 
                    }
                }
                if (count == 3) ans = "Yes";
            }
        }
    }

    cout << ans << endl;
}