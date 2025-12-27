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
    rep(i,n){
        cin >> a[i];
        a[i]--;
    }
    int current = 0;
    int count = 0;
    rep(i,n){
        if(current == 1){
            cout << count <<"\n";
            return 0;
        }
        current = a[current];
        count++;
    }
    cout << -1 << "\n";
    return 0;
}