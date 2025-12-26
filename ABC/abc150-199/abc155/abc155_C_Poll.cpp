#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string,int> counts;
    int max_count = 0;

    rep(i,n){
        string s;
        cin >> s;
        counts[s]++;
        max_count = max(max_count,counts[s]);
    }
    for(auto const& [str,count]:counts){
        if(count==max_count){
            cout<<str<<"\n";
        }
    }
    return 0;
}