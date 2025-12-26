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
    int ans = 1;
    for(int b = 2; b<=x; b++){
        int p = b*b;
        while(p<=x){
            ans=max(ans,p);
            if(x/b<p)break;
            p*=b;
        }
    }
    cout<<ans<<endl;
    
}