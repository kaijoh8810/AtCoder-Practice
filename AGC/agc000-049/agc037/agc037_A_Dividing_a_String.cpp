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
    
    string prev = "";
    string curr = "";
    int ans=0;

    rep(i,n){
        curr+=s[i];
        if(curr!=prev){
            ans++;
            prev=curr;
            curr="";
        }
    }
    cout<<ans<<endl;
}