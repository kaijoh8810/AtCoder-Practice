#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;

    ll cost1 = (ll)a*x+(ll)b*y;
    ll cost2 = 0;
    int min_num = min(x,y);
    cost2 += (ll)2*c*min_num;
    if(x>y){
        cost2+=(ll)a*(x-min_num);
    }else{
        cost2+=(ll)b*(y-min_num);
    }
    int max_num = max(x,y);
    ll cost3 = (ll)2*c*max_num;
    cout<<min({cost1,cost2,cost3})<<endl;
}