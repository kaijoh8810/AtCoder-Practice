#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    for(int i = n-2; i>0; i-=2){
        string sub = s.substr(0,i);
        int half = i/2;
        string left = sub.substr(0,half);
        string right = sub.substr(half,half);
        if(left == right){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}