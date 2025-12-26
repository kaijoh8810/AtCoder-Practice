#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t;
    cin >> s >> t;

    string s2 = s+s;

    if(s2.find(t)!=string::npos){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl; 
    
}