#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

    int N;
vector<int> p, q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    vector<int> p(N), q(N);
    rep(i,N) cin >> p[i], --p[i];
    rep(i,N) cin >> q[i], --q[i];

    // 各順列が何番目かを求める
    map<vector<int>, int> ord;
    int iter = 0;

    // スタートとなる順列
    vector<int> v(N);
    rep(i,N) v[i] = i;

    // 順番に
    do {
        ord[v] = iter++;
    } while (next_permutation(all(v)));

    cout << abs(ord[p] - ord[q]) << endl;
}