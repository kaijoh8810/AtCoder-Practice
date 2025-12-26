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
    vector<double> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    vector<int> p(n);
    iota(all(p),0);

    double total_len = 0;
    int cnt = 0;

    do{
        rep(i,n-1){
            int from = p[i];
            int to = p[i+1];

            double dx = x[from] - x[to];
            double dy = y[from] - y[to];

            total_len += sqrt(dx*dx+dy*dy);
        }
        cnt++;
    }while(next_permutation(all(p)));

    cout << fixed << setprecision(10) << total_len/cnt << endl;
    return 0;
}