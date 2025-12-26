#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,c,k;
    cin >> a >> b >> c >> k;

    if(k%2==0){
        cout << a-b << endl;
    }
    else {
        cout <<b-a <<endl;
    }
    return 0;
    
}