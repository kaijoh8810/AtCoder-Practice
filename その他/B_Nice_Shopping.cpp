#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,m;
    cin >> a >> b >> m;

    vector<int> A(a),B(b);
    rep(i,a) cin >> A[i];
    rep(i,b) cin >> B[i];
    vector<int> x(m),y(m),c(m);
    rep(i,m) cin >> x[i] >> y[i] >> c[i];

    int min_AB = *min_element(all(A))+*min_element(all(B)); 
    rep(i,m){
        if(A[x[i]-1]+B[y[i]-1]-c[i]< min_AB){
            min_AB = A[x[i]-1]+B[y[i]-1]-c[i];
        }
    }
    cout << min_AB << endl;
}