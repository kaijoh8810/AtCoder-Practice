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
    int n = s.size();

    if(s[0]!='A'){
        cout << "WA" << endl;
        return 0;
    }

    int count_c = 0;
    for(int i = 2; i<=n-2; i++){
        if(s[i]=='C'){
            count_c++;
        }
    }
    if(count_c!=1){
        cout << "WA" << endl;
        return 0;
    }
    rep(i,n){
        if(s[i]=='A'||s[i]=='C'){
            continue;
        }
        if(!islower(s[i])){
            cout << "WA" << endl;
            return 0;
        }
    }
    cout << "AC" << endl;
    return 0;
    
}