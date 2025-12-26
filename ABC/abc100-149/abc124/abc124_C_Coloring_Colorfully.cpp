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
    
    int count0 = 0;
    int count1 = 0;

    rep(i,n){
        if(i%2 == 0){
            if(s[i]!='0') count0++;
        }
        else{
            if(s[i]!='1') count0++;
        }

        if(i%2==0){
            if(s[i]!='1') count1++;
        }
        else{
            if(s[i]!='0') count1++;
        }
    }
    cout << min(count0,count1) << endl;
    return 0;
}