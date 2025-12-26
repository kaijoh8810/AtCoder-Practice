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
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    int count = 0;
    rep(i,n){
        int target = a[i]-1;
        if(a[target]==i+1){
            count++;
        }
    }
    cout << count/2<<endl;
    return 0;
}