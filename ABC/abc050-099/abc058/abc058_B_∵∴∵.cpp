#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string O, E;
    cin >> O >> E;

    rep(i,E.length()){
        cout << O[i] << E[i];
    }
    if(O.length() > E.length()){
        cout << O[O.length()-1];
    }
    cout << endl;
    return 0;
    
}