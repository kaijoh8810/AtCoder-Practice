#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;

    vector<int> wa_count(n+1, 0);
    vector<bool> is_ac(n+1,false);
    
    int total_ac = 0;
    int total_pen = 0;

    rep(i,m){
        int p;
        string s;
        cin >> p >> s;

        if(is_ac[p])continue;

        if(s == "AC"){
            is_ac[p]=true;
            total_ac++;
            total_pen+=wa_count[p];
        }else{
            wa_count[p]++;
        }
    }
    cout << total_ac << " " << total_pen<<endl;
    return 0;
    
}