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
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    h[0]--;
    for(int i = 1; i<n; i++){
        if(h[i]-1>=h[i-1]){
            h[i]--;
        }
        else if(h[i]<h[i-1]){
            cout << "No"<<endl;
            return 0;
        }
    }
    cout <<"Yes"<<endl;
}