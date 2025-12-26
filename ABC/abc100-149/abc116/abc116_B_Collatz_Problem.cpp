#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin >> s;
    int n = 1000000;
    vector<int> v;
    v.push_back(s);
    rep(i,n){
        int now = v[i];
        int next;

        if(now%2==0){
            next = now/2;
        }
        else{
            next = now*3+1;
        }
    if(count(all(v),next)){
        cout << v.size()+1 <<endl;
        return 0;
    }
    v.push_back(next);
}
}
