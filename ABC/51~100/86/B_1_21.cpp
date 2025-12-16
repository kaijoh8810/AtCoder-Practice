#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;
    if(b/100>=1){
        b+=a*1000;
    }
    else if(b/10>=1){
        b+=a*100;
    }
    else {
        b+=a*10;
    }
    rep(i,b/2){
        if(i*i==b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}