#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll ans = 0;
    ll count_B = 0;
    for(char c:s){
        if(c=='B'){
            count_B++;
        }else{
            ans+=count_B;
        }
    }
    cout << ans << endl;
}