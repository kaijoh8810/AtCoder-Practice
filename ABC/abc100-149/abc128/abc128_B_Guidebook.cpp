#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


struct Restaurant{
    string city;
    int score;
    int id;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Restaurant> a(n);
    rep(i,n){
        cin >> a[i].city >> a[i].score;
        a[i].id = i+1;
    }
    sort(a.begin(),a.end(),[](const Restaurant& left, const Restaurant& right){
        if(left.city != right.city){
            return left.city<right.city;
        }
        return left.score>right.score;
    });
    rep(i,n){
        cout<<a[i].id<<"\n";
    }
    return 0;
}