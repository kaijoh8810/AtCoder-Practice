#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    int cnt = 0;
    while(a%2==0&&b%2==0&&c%2==0){
        if(a == b && b == c &&a%2==0){
            cout << -1 << endl;
            return 0;
        }
        cnt++;
        int na = b/2+c/2;
        int nb = a/2+c/2;
        int nc = a/2+b/2;
        a = na;
        b = nb;
        c = nc;
    }
    cout << cnt << endl;
}