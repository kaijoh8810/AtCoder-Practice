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
    vector<int> p(n),q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];

    vector<int> a(n);
    rep(i,n) a[i] = i+1;

    int p_rank = 0, q_rank = 0;
    int cnt = 0;

    do{
        if(a == p) p_rank = cnt;
        if(a == q) q_rank = cnt;
        cnt++;
    }while(next_permutation(all(a)));
    cout << abs(p_rank - q_rank) << endl;
    return 0;
}