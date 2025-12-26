#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,q;
    cin >> n >> k >> q;

    vector<int> score(n,0);
    rep(i,q){
        int a;
        cin >> a;
        a--;
        score[a]++;
    }
    rep(i,n){
        if(k-q+score[i]>0){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
    
}