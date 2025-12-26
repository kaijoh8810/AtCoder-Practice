#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    vector<int> v(q,0);
    int cnt = -1;
    rep(i,q){
        int a,b;
        cin >> a >> b;
        if(a == 1){
            cnt++;
            v[cnt]=b;
        }
        else if(a == 2){
            cout << v[cnt-b+1] << endl;
        }
    }
}