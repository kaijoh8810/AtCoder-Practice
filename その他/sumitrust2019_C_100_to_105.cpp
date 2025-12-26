#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    int k = x / 100;
    int rem = x%100;
    if(rem<=5*k){
        cout<<1<<"\n";
    }else{
        cout << 0 << "\n";
    }
}