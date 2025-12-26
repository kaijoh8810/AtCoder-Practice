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
    int n = 3;
    for(int mask = 0; mask < (1<<n); mask++){
        int sum = s[0]-'0';
        string formula = "";
        formula +=s[0];

        rep(i,n){
            if(mask & (1 << i)){
                sum += (s[i+1] - '0');
                formula += '+';
            }
            else {
                sum-=(s[i+1]-'0');
                formula += '-';
            }
            formula +=s[i+1];
        }
        if(sum == 7){
            cout << formula << "=7" << endl;
            return 0;
        }
    }
    
}