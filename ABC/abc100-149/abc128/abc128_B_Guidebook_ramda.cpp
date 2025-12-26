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
    vector<tuple<string,int,int>> restaurants;
    rep(i,n){
        string s;
        int p;
        cin >> s >> p;
        restaurants.push_back(make_tuple(s,-p,i+1));
    }
    sort(all(restaurants));
    for(auto const& [city,score,id]:restaurants){
        cout << id <<"\n";
    }
    return 0;
}